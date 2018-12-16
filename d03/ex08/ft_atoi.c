/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 12:07:49 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/16 12:07:52 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		sum;
	int		sign;
	int		n;

	sum = 0;
	sign = 1;
	n = 0;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
		{
			sign = -1;
		}
		n++;
	}
	while (str[n] != '\0')
	{
		if (!(str[n] >= '0' && str[n] <= '9'))
		{
			return (sign * sum);
		}
		sum = sum * 10 + (str[n] - '0');
		n++;
	}
	return (sign * sum);
}