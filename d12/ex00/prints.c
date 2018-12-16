/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:35:00 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/29 14:35:17 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putstrerror(char *str)
{
	write(2, str, ft_strlen(str));
}

int		ft_check_args(int argc)
{
	if (argc == 1)
	{
		ft_putstrerror("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstrerror("Too many arguments.\n");
		return (0);
	}
	return (1);
}
