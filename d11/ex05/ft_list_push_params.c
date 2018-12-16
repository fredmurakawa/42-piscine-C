/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:09:40 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/27 20:09:41 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;

	tmp = 0;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&tmp, av[i]);
		i++;
	}
	return (tmp);
}
