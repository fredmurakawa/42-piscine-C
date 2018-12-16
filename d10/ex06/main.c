/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 10:33:26 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/26 10:34:46 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "struct.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
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

int		ft_operation(int nbr1, char *op, int nbr2)
{
	int i;

	i = 0;
	while (op[i])
	{
		if (i > 0)
			return (0);
		i++;
	}
	i = 0;
	if (*op == '+' || *op == '-' || *op == '/' || *op == '*' || *op == '%')
	{
		while (i < 5)
		{
			if (g_ope_array[i].operation == *op)
				return (g_ope_array[i].func(nbr1, nbr2));
			i++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		nbr1;
	int		nbr2;
	char	*op;

	if (argc != 4)
		return (0);
	nbr1 = ft_atoi(argv[1]);
	nbr2 = ft_atoi(argv[3]);
	op = argv[2];
	if (nbr2 == 0 && *op == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (nbr2 == 0 && *op == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_operation(nbr1, argv[2], nbr2));
	ft_putchar('\n');
	return (0);
}
