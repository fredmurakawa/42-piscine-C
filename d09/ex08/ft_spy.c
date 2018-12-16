/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 11:48:33 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/23 11:48:35 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

char	*ft_strlowcase(char *str)
{
	int		size;
	int		i;

	size = 0;
	while (str[size] != '\0')
		size++;
	i = 0;
	while (i < size)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != '\0')
		return (s1[i]);
	if (s2[i] != '\0')
		return (-s2[i]);
	return (0);
}

void	ft_alert(char *full_string)
{
	char	*president;
	char	*attack;
	char	*bauer;
	int		i;
	int		j;

	president = "president";
	attack = "attack";
	bauer = "bauer";
	i = 0;
	j = 0;
	if (ft_strcmp(full_string, president) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(full_string, attack) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(full_string, bauer) == 0)
		ft_putstr("Alert!!!\n");
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	full_string[1000];

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ' && argv[i][j] != '\t' && argv[i][j] != '\n')
			{
				full_string[k] = argv[i][j];
				k++;
			}
			j++;
		}
		full_string[k] = '\0';
		ft_strlowcase(full_string);
		ft_alert(full_string);
		i++;
	}
	return (0);
}
