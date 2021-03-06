/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 10:35:39 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/19 10:35:40 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		res;
	int		n;
	int		sign;

	sign = 1;
	res = 0;
	n = 0;
	while ((str[n] != '+') && (str[n] != '-') &&
		!(str[n] >= '0' && str[n] <= '9'))
	{
		n++;
	}
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign = -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = res * 10 + (str[n] - '0');
		n++;
	}
	return (sign * res);
}
