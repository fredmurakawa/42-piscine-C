/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:56:21 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/26 11:56:23 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
