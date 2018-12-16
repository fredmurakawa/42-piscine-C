/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 20:08:15 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/25 20:08:20 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int		ft_find_next_zero(int **table, int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (table[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int		ft_check_row(int **table, int row, int nbr)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (table[row][i] == nbr)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_column(int **table, int col, int nbr)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (table[i][col] == nbr)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_square(int **table, int row, int col, int nbr)
{
	int		square_row;
	int		square_col;
	int		i;
	int		j;

	square_row = row - row % 3;
	square_col = col - col % 3;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (table[square_row + i][square_col + j] == nbr)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_valid_args(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	if (argc == 10)
	{
		while (i < 10)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (!((argv[i][j] >= '1' && argv[i][j] <= '9') ||
				argv[i][j] == '.'))
					return (0);
				j++;
			}
			if (j != 9)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
