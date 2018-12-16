/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 23:39:09 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/17 23:39:11 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_recursive_function(int i)
{
	if (i < 1)
		ft_recursive_function(i - 1);
}

int		ft_eight_queens_puzzle(void)
{
	ft_recursive_function(2);
	return (92);
}
