/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 14:44:57 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/19 14:44:58 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;
	int		size_find;

	i = 0;
	size_find = 0;
	while (to_find[size_find] != '\0')
		size_find++;
	if (size_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (to_find[n] == str[i])
		{
			i++;
			n++;
			if (n == size_find)
				return (&str[i - size_find]);
		}
		i++;
	}
	return (0);
}
