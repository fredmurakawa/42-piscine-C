/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:15:29 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/26 22:15:31 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int length, char **argv)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < length - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	ft_sort(i, tab);
}
