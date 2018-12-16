/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:08:51 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/23 13:08:53 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i > k && j > k) || (k > i && k > j && j > i))
		return (j);
	if ((i > j && i > k && k > j) || (j > i && j > k && k > i))
		return (k);
	if ((j > i && j > k && i > k) || (k > i && k > j && i > j))
		return (i);
	return (0);
}