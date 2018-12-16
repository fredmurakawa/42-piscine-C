/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:40:20 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/17 21:57:52 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_fl(int x)
{
	int column;

	column = 0;
	while (++column <= x)
	{
		if (column == 1)
			ft_putchar('/');
		else if (column == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
}

void	ft_ll(int x)
{
	int column;

	column = 0;
	while (++column <= x)
	{
		if (column == 1)
			ft_putchar('\\');
		else if (column == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
}

void	ft_ml(int x)
{
	int column;

	column = 0;
	while (++column <= x)
	{
		if (column == 1 || column == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;

	if (x <= 0 || y <= 0)
		return ;
	line = 1;
	ft_fl(x);
	ft_putchar('\n');
	while (++line < y)
	{
		ft_ml(x);
		ft_putchar('\n');
	}
	if (y > 1)
	{
		ft_ll(x);
		ft_putchar('\n');
	}
}
