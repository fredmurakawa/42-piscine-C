/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaffeo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 10:05:26 by smaffeo-          #+#    #+#             */
/*   Updated: 2018/04/03 10:05:29 by smaffeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *g_str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*g_str == ' ' || *g_str == '\t' || *g_str == '\n'
		|| *g_str == '\r' || *g_str == '\v' || *g_str == '\f')
		g_str++;
	if (*g_str == '+')
		g_str++;
	else if (*g_str == '-')
	{
		sign = -1;
		g_str++;
	}
	while (*g_str >= '0' && *g_str <= '9')
	{
		result = result * 10 + *g_str - '0';
		g_str++;
	}
	return (result * sign);
}

int		check_minimum(int x, int y, int z)
{
	if ((x >= y && y >= z) || (y >= x && x >= z))
		return (z + 1);
	if ((x >= z && z >= y) || (z >= x && x >= y))
		return (y + 1);
	return (x + 1);
}

void	print_table(void)
{
	int		row;

	row = 0;
	while (row < g_infos.rows)
	{
		write(1, g_o_table[row], g_infos.cols);
		write(1, "\n", 1);
		row++;
	}
}

void	free_memory(char *str)
{
	free(str);
	free(g_o_table);
	free(g_nbr_table);
	str = NULL;
	g_o_table = NULL;
	g_nbr_table = NULL;
}
