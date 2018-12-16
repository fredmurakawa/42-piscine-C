/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:48:47 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/03 15:06:12 by smaffeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	solve_bsq(char *str)
{
	set_chars(str);
	if (ft_invalid_map(str) || g_infos.rows != ft_atoi(str))
		write(2, "map error\n", 10);
	else
	{
		set_tables();
		fill_o_table(str);
		fill_nbr_table();
		set_square(g_infos.max_sqr, g_infos.max_row, g_infos.max_col);
		print_table();
	}
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		fd;

	if (argc == 1)
	{
		str = read_file(0);
		solve_bsq(str);
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			fd = open_file(argv[i]);
			str = read_file(fd);
			close_file(fd);
			solve_bsq(str);
			if (i != argc - 1)
				ft_putchar('\n');
		}
	}
	free_memory(str);
	return (0);
}
