/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:33:03 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/01 17:33:04 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		*push_g_operand(int nbr)
{
	*g_operand = nbr;
	g_operand++;
	return (g_operand);
}

char	*push_g_operator(char op)
{
	*g_operator = op;
	g_operator++;
	g_op_index++;
	return (g_operator);
}

int		pop_nbr(void)
{
	int		nbr;

	g_operand--;
	nbr = *g_operand;
	return (nbr);
}

char	pop_op(void)
{
	char	op;

	g_operator--;
	g_op_index--;
	op = *g_operator;
	return (op);
}

char	last_op(void)
{
	char	last_op;

	g_operator--;
	g_op_index--;
	last_op = *g_operator;
	g_operator++;
	g_op_index++;
	return (last_op);
}
