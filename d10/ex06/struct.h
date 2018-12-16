/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 10:33:26 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/26 10:34:46 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_operation
{
	char	operation;
	int		(*func)(int, int);
}				t_operation;

t_operation		g_ope_array[] =
{
	{'+', &ft_add},
	{'-', &ft_sub},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod}
};

#endif
