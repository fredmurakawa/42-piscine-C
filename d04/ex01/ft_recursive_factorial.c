/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 13:41:57 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/17 13:41:59 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		response;

	response = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		response = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (response);
}
