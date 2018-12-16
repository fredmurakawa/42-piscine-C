/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 09:59:06 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/17 10:24:12 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		response;

	response = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		response = response * nb;
		nb--;
	}
	return (response);
}
