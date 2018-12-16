/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:38:05 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/27 14:38:06 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_opp.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

void		ft_operation(int nbr1, char *op, int nbr2)
{
	int i;

	i = 0;
	while (op[i])
	{
		if (i++ > 0)
			ft_putnbr(g_opptab[5].func(nbr1, nbr2));
	}
	if (ft_strcmp(op, "+") == 0 || ft_strcmp(op, "-") == 0 ||
		ft_strcmp(op, "*") == 0 || ft_strcmp(op, "/") == 0 ||
		ft_strcmp(op, "%") == 0)
	{
		i = 0;
		while (i < 5)
		{
			if (!ft_strcmp(g_opptab[i].operation, op))
				ft_putnbr(g_opptab[i].func(nbr1, nbr2));
			i++;
		}

	}
	else
	{
		ft_putnbr(g_opptab[5].func(nbr1, nbr2));
	}
	// return (0);
}

int		main(int argc, char **argv)
{
	int		nbr1;
	int		nbr2;

	if (argc != 4)
		return (0);
	nbr1 = ft_atoi(argv[1]);
	nbr2 = ft_atoi(argv[3]);
	if (nbr2 == 0 && *argv[2] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (nbr2 == 0 && *argv[2] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	// if (ft_operation(nbr1, argv[2], nbr2))
	// {
		ft_operation(nbr1, argv[2], nbr2);
		ft_putchar('\n');
	// }
	return (0);
}
