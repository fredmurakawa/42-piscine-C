/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 21:31:06 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/19 21:31:08 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int size_dest;
	unsigned	int size_src;
	unsigned	int i;
	unsigned	int j;

	size_dest = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	i = size_dest;
	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	if (size_dest >= size)
		return (size + size_src);
	j = 0;
	while (src[j] != '\0' && (j + size_dest) < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[j + size_dest] = '\0';
	return (size_dest + size_src);
}
