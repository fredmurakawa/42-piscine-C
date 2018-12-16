/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:14:06 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/23 15:14:08 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define TRUE 1
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0
# include <unistd.h>

typedef int			t_bool;

typedef struct		s_door
{
	int		state;
}					t_door;

t_bool				open_door(t_door	*door);
t_bool				close_door(t_door	*door);
t_bool				is_door_close(t_door	*door);
t_bool				is_door_open(t_door	*door);

#endif
