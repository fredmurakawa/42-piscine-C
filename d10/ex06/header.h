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

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_add(int a, int b);

int		ft_sub(int a, int b);

int		ft_mul(int a, int b);

int		ft_div(int a, int b);

int		ft_mod(int a, int b);

int		ft_atoi(char *str);

int		ft_operation(int nbr1, char *op, int nbr2);

#endif
