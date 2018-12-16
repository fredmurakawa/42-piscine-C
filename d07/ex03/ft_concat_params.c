/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:36:44 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/21 18:36:47 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*array;

	size = 0;
	i = 1;
	while (i < argc)
		size += ft_strlen(argv[i++]) + 1;
	array = (char*)malloc(sizeof(char) * size);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			array[k++] = argv[i][j++];
		if (i == argc - 1)
			array[k++] = '\0';
		else
			array[k++] = '\n';
		i++;
	}
	return (array);
}
