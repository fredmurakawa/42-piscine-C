/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 18:02:33 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/19 18:02:35 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		str -= 32;
	}
	return (str);
}

char	ft_strlowcase(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		str += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = ft_strupcase(str[i]);
		else if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			str[i + 1] = ft_strupcase(str[i + 1]);
			i++;
		}
		else
			str[i] = ft_strlowcase(str[i]);
		i++;
	}
	return (str);
}
