/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 22:05:20 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/17 22:05:21 by fbueno-m         ###   ########.fr       */
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
			ft_putchar('A');
		else if (column == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
}

void	ft_ll(int x)
{
	int column;

	column = 0;
	while (++column <= x)
	{
		if (column == 1)
			ft_putchar('C');
		else if (column == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

void	ft_ml(int x)
{
	int column;

	column = 0;
	while (++column <= x)
	{
		if (column == 1 || column == x)
			ft_putchar('B');
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
