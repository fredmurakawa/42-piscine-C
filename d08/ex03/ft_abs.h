/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:52:17 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/22 17:52:18 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x) ft_abs(x)

int		ft_abs(int nbr)
{
	if (nbr == -2147483648)
		return (0);
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

#endif
