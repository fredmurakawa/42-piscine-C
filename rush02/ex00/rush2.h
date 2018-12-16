/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:24:26 by shuang            #+#    #+#             */
/*   Updated: 2018/03/31 19:51:03 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
char	position00(int col, int row, int w, int h);
char	*rush00(int w, int h);
char	position01(int col, int row, int w, int h);
char	*rush01(int w, int h);
char	position02(int col, int row, int w, int h);
char	*rush02(int w, int h);
char	position03(int col, int row, int w, int h);
char	*rush03(int w, int h);
char	position04(int col, int row, int w, int h);
char	*rush04(int w, int h);

#endif
