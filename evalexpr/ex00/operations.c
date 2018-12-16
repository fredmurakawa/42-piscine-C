/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 18:50:27 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/01 18:50:36 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	parse_num(void)
{
	push_g_operand(ft_atoi(g_str));
	while (*g_str >= '0' && *g_str <= '9')
		g_str++;
	g_str--;
}

int		g_operator_value(char op)
{
	if (op == '+' || op == '-')
		return (1);
	else if (op == '*' || op == '/' || op == '%')
		return (2);
	else if (op == '(')
		return (-1);
	else
		return (0);
}

int		sta_op_not_smal(char str_op, char stack_op)
{
	if (g_operator_value(stack_op) - g_operator_value(str_op) >= 0)
		return (1);
	return (0);
}

void	ft_do_op(void)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr2 = pop_nbr();
	nbr1 = pop_nbr();
	op = pop_op();
	if (op == '+')
		push_g_operand(nbr1 + nbr2);
	else if (op == '-')
		push_g_operand(nbr1 - nbr2);
	else if (op == '*')
		push_g_operand(nbr1 * nbr2);
	else if (op == '/')
		push_g_operand(nbr1 / nbr2);
	else if (op == '%')
		push_g_operand(nbr1 % nbr2);
}
