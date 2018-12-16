/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 22:50:13 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/22 22:50:16 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_whitesspaces(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_number_words(char *str)
{
	int	i;
	int	chr;

	if (*str == '\0')
		return (0);
	i = 0;
	chr = 0;
	while (*str)
	{
		if (ft_whitesspaces(*str))
		{
			str++;
			chr = 0;
		}
		else
		{
			if (chr == 0)
				i++;
			chr = 1;
			str++;
		}
	}
	return (i);
}

char	**ft_allocate_memory(char *str, int number_words, int i, int j)
{
	char	**arr;

	arr = (char**)malloc(sizeof(char*) * (number_words + 1));
	if (*str == '\0' && ((arr[0] = 0) || 1))
		return (arr);
	while (ft_whitesspaces(*str))
		str++;
	while (*str)
	{
		if (ft_whitesspaces(*str))
		{
			arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while ((j = 0) || ft_whitesspaces(*str))
				str++;
			str--;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			arr[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!(ft_whitesspaces(*(str - 1))))
		i++;
	arr[i] = 0;
	return (arr);
}

char	**check_final(char *str, char **arr, int number_words)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < number_words)
	{
		if (ft_whitesspaces(*str))
		{
			while (ft_whitesspaces(*str))
				str++;
			arr[i][j] = '\0';
			i += (j != 0) ? 1 : 0;
			j = 0;
		}
		else if (*str == '\0')
		{
			arr[i][j] = '\0';
			return (arr);
		}
		else
			arr[i][j++] = *str++;
	}
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		number_words;
	char	**arr;

	i = 0;
	j = 0;
	number_words = ft_number_words(str);
	arr = ft_allocate_memory(str, number_words, 0, 0);
	while (ft_whitesspaces(*str))
		str++;
	return (check_final(str, arr, number_words));
}
