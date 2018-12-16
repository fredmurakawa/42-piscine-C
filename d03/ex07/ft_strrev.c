/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 22:54:58 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/15 22:55:00 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		counter;
	char	aux;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	i = 0;
	counter--;
	while (i < counter)
	{
		aux = str[counter];
		str[counter] = str[i];
		str[i] = aux;
		i++;
		counter--;
	}
	return (str);
}
