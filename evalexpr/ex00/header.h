/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:32:08 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/01 17:32:10 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

int		*g_operand;
char	*g_operator;
char	*g_str;
int		g_op_index;

int		*push_g_operand(int nbr);
char	*push_g_operator(char op);
int		pop_nbr();
char	pop_op();
char	last_op(void);
void	parse_num();
int		g_operator_value(char op);
int		sta_op_not_smal(char str_op, char stack_op);
void	ft_do_op(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *g_str);
int		ft_atoi(char *g_str);

#endif
