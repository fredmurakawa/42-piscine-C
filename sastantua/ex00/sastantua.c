/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 20:13:19 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/18 20:13:21 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_line(int altura, int largura)
{
	int column;

	column = 1;
	while (column <= largura)
	{
		if (column == 1)
			putchar('/');
		else if (column == largura)
		{
			putchar('\\');
			putchar('\n');
		}
		else
		{
			putchar('*');
		}
		column++;
	}
}

void	print_pyr(int altura, int largura)
{
	int		i;

	i = 1;
	while (i <= altura)
	{
		print_line(altura, largura);
		largura += 2;
		i++;
	}
}

void sastantua(int size)
{
	int		altura;
	int		largura_linha1;
	int		i;
	int		diferenca;
	int		adicional;

	i = 1;
	altura = 3;
	diferenca = 10;
	adicional = 2;
	largura_linha1 = 3;
	while(i <= size)
	{
		print_pyr(altura, largura_linha1);
		i++;
		largura_linha1 += diferenca;
		diferenca += 2;
		altura++;
	}

width += 4 + 2 * ((floor - 2) / 2);

}

int		main(void)
{
	sastantua(5);
	return 0;
}
