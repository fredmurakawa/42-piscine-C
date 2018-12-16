/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:25:06 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/03 14:54:13 by smaffeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define EXIT_FAILURE 1

typedef struct		s_infos
{
	int				rows;
	int				cols;
	char			empty;
	char			obstacle;
	char			full;
	int				max_row;
	int				max_col;
	int				max_sqr;
}					t_infos;

t_infos				g_infos;
char				**g_o_table;
int					**g_nbr_table;

char				*read_file(int fd);
int					open_file(char *argv);
void				close_file(int fd);
void				solve_bsq(char *str);
void				set_chars(char *str);
int					ft_invalid_map(char *str);
int					ft_atoi(char *g_str);
void				set_tables(void);
void				fill_o_table(char *str);
void				fill_nbr_table(void);
int					to_value(char c, int row, int col);
int					check_minimum(int x, int y, int z);
void				set_square(int sqr, int row, int col);
void				print_table(void);
void				free_memory(char *str);
void				ft_putchar(char c);

#endif
