/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 09:16:51 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/20 09:16:53 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_cpy(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int j;

	i = 0;
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int size_src;
	unsigned	int i;
	unsigned	int j;

	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	if (size == 0)
		return (size_src);
	i = 0;
	j = 0;
	if (size_src >= size)
	{
		ft_cpy(dest, src, size);
		return (size_src);
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
