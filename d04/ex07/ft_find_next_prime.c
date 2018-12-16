/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 17:04:05 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/17 17:04:08 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		n;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	n = 2;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb < 10000)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
