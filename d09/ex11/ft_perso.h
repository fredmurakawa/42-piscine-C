/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:18:42 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/23 14:31:53 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD "Spy"

typedef struct		s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}					t_perso;

#endif
