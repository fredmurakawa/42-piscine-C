/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:06:25 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/30 15:06:27 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void*)0)
		return ;
	btree_apply_infix(root->left, (*applyf));
	(*applyf)(root->item);
	btree_apply_infix(root->right, (*applyf));
}
