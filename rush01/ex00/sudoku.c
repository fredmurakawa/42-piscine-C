/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 19:03:00 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/25 19:03:05 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int		**ft_set_table(char **argv)
{
	int		**table;
	int		i;
	int		j;

	i = 0;
	table = (int **)malloc(sizeof(int *) * 10);
	while (i < 9)
	{
		table[i] = (int *)malloc(sizeof(int) * 10);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			table[i][j] = (argv[i + 1][j] - 48);
			if (argv[i + 1][j] == '.')
				table[i][j] += 2;
			j++;
		}
		i++;
	}
	return (table);
}

int		ft_solve_table(int **table)
{
	int		row;
	int		col;
	int		nbr;

	if (!ft_find_next_zero(table, &row, &col))
	{
		return (1);
	}
	nbr = 1;
	while (nbr <= 9)
	{
		if (ft_check_row(table, row, nbr) && ft_check_column(table, col, nbr) &&
		ft_check_square(table, row, col, nbr))
		{
			table[row][col] = nbr;
			if (ft_solve_table(table))
				return (1);
			table[row][col] = 0;
		}
		nbr++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		**table;

	if (ft_valid_args(argc, argv) != 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	table = ft_set_table(argv);
	if (ft_solve_table(table))
	{
		ft_print_table(table);
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (0);
}
