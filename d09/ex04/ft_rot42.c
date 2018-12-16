/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 10:43:11 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/23 11:29:57 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_check_letter(char *str)
{
	int		i;
	char	*arr;

	i = 0;
	arr = str;
	while (arr[i] != '\0')
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			if (arr[i] + 16 > 'Z')
				arr[i] -= 10;
			else
				arr[i] += 16;
		}
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			if (arr[i] + 16 > 'z')
				arr[i] -= 10;
			else
				arr[i] += 16;
		}
		i++;
	}
	return (arr);
}

char	*ft_rot42(char *str)
{
	ft_check_letter(str);
	return (str);
}
