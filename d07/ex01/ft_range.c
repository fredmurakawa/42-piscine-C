/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:19:06 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/21 16:19:07 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*array;

	size = max - min;
	array = (int*)malloc(sizeof(*array) * (size + 1));
	if (size <= 0)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	array[i] = '\0';
	return (array);
}
