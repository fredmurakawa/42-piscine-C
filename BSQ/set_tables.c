/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tables.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 23:34:47 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/03 15:01:19 by smaffeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	set_tables(void)
{
	int	i;

	if (!(g_o_table = (char**)malloc(sizeof(char*) * g_infos.rows + 1)))
		exit(EXIT_FAILURE);
	i = 0;
	while (i < g_infos.rows)
	{
		if (!(g_o_table[i] = (char*)malloc(sizeof(char) * g_infos.cols + 1)))
			exit(EXIT_FAILURE);
		g_o_table[i][g_infos.cols] = '\0';
		i++;
	}
	if (!(g_nbr_table = (int**)malloc(sizeof(int*) * g_infos.rows + 1)))
		exit(EXIT_FAILURE);
	i = 0;
	while (i < g_infos.rows)
	{
		if (!(g_nbr_table[i] = (int*)malloc(sizeof(int) * g_infos.cols + 1)))
			exit(EXIT_FAILURE);
		i++;
	}
}

void	fill_o_table(char *str)
{
	int		i;
	int		row;
	int		col;

	i = 0;
	row = -1;
	col = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			col = 0;
			row++;
		}
		else if (row > -1)
		{
			g_o_table[row][col] = str[i];
			col++;
		}
		i++;
	}
}

void	fill_nbr_table(void)
{
	int		row;
	int		col;

	g_infos.max_sqr = 0;
	row = 0;
	while (row < g_infos.rows)
	{
		col = 0;
		while (col < g_infos.cols)
		{
			g_nbr_table[row][col] = to_value(g_o_table[row][col], row, col);
			if (g_nbr_table[row][col] > g_infos.max_sqr)
			{
				g_infos.max_sqr = g_nbr_table[row][col];
				g_infos.max_row = row;
				g_infos.max_col = col;
			}
			col++;
		}
		row++;
	}
}

int		to_value(char c, int row, int col)
{
	if (c == g_infos.empty)
	{
		if (row == 0 || col == 0)
			return (1);
		else
			return (check_minimum(g_nbr_table[row - 1][col],
				g_nbr_table[row][col - 1], g_nbr_table[row - 1][col - 1]));
	}
	else
		return (0);
}

void	set_square(int sqr, int row, int col)
{
	int		i;
	int		j;
	int		column;

	i = 0;
	while (i < sqr)
	{
		j = 0;
		column = col;
		while (j < sqr)
		{
			g_o_table[row][column] = g_infos.full;
			column--;
			j++;
		}
		row--;
		i++;
	}
}
