/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:41:42 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/28 13:41:45 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current_node;
	t_list	*next_node;
	t_list	*previous_node;

	current_node = *begin_list;
	previous_node = 0;
	next_node = 0;
	while (current_node)
	{
		next_node = current_node->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = next_node;
	}
	*begin_list = previous_node;
}
