/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 23:52:18 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/22 23:52:38 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		j = 0;
		i++;
	}
	free(factory);
}
