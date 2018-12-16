/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:53:59 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/23 14:54:02 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int bigger;

	i = 0;
	if (length == 0)
		return (0);
	bigger = tab[0];
	while (i < length)
	{
		if (tab[i] > bigger)
			bigger = tab[i];
		i++;
	}
	return (bigger);
}
