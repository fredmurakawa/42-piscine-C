/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:31:54 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/01 17:31:59 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	parse_equation(void)
{
	while (*g_str)
	{
		if (*g_str >= '0' && *g_str <= '9')
			parse_num();
		else if (*g_str == '(')
			push_g_operator(*g_str);
		else if (*g_str == '*' || *g_str == '/' || *g_str == '+' ||
			*g_str == '-' || *g_str == '%')
		{
			while (g_op_index > 0 && sta_op_not_smal(*g_str, last_op()))
				ft_do_op();
			push_g_operator(*g_str);
		}
		else if (*g_str == ')')
		{
			while (last_op() != '(')
				ft_do_op();
			pop_op();
		}
		g_str++;
	}
}

int		eval_expr(char *argv)
{
	int		result;

	g_op_index = 0;
	g_str = argv;
	g_operand = (int*)malloc(sizeof(int*) * ft_strlen(g_str));
	g_operator = (char*)malloc(sizeof(char*) * ft_strlen(g_str));
	parse_equation();
	while (g_op_index > 0)
		ft_do_op();
	result = *(g_operand - 1);
	free(g_operand - 1);
	free(g_operator);
	return (result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
