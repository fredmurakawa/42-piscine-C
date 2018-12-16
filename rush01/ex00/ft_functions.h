/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 20:15:59 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/25 20:16:04 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_valid_args(int argc, char **argv);

void	ft_print_table(int **table);

int		ft_find_next_zero(int **table, int *row, int *col);

int		ft_check_row(int **table, int row, int nbr);

int		ft_check_column(int **table, int col, int nbr);

int		ft_check_square(int **table, int row, int col, int nbr);

#endif
