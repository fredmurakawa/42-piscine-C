/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:29:37 by cwu               #+#    #+#             */
/*   Updated: 2018/03/31 18:43:07 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

char	position02(int col, int row, int w, int h)
{
	char c;
	char t;

	c = ' ';
	if (row == 1)
	{
		t = (col == w) ? 'A' : 'B';
		c = (col == 1) ? 'A' : t;
	}
	else if (row == h)
	{
		t = (col == w) ? 'C' : 'B';
		c = (col == 1) ? 'C' : t;
	}
	else if (col == 1 || col == w)
		c = 'B';
	return (c);
}

char	*rush02(int w, int h)
{
	int		row;
	int		col;
	int		i;
	char	*str;

	str = malloc((w * h) + 1);
	row = 1;
	i = 0;
	if (w < 0 || h < 0)
		return (NULL);
	while (row <= h)
	{
		col = 1;
		while (col <= w)
		{
			str[i] = position02(col, row, w, h);
			i++;
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
