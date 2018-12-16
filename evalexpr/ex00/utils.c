/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:32:27 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/01 17:32:29 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_strlen(char *g_str)
{
	int i;

	i = 0;
	while (g_str[i] != '\0')
	{
		i++;
	}
	return (i);
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
