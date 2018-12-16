/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:14:48 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/27 21:14:49 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *begin_list;
	if (!current_node)
		return ;
	while (current_node)
	{
		next_node = current_node;
		free(current_node);
		current_node = next_node->next;
	}
	*begin_list = 0;
}
