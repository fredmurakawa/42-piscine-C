/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:16:22 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/28 16:16:24 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int cmp())
{
	t_list	*tmp;
	t_list	*current_node;
	t_list	*last_node;

	last_node = NULL;
	tmp = NULL;
	current_node = *begin_list;
	while (current_node)
	{
		if (cmp(current_node->data, data_ref) == 0)
		{
			if (current_node == *begin_list)
				*begin_list = current_node->next;
			else
				last_node->next = current_node->next;
			tmp = current_node;
			current_node = current_node->next;
			free(tmp);
		}
		else
		{
			last_node = current_node;
			current_node = current_node->next;
		}
	}
}
