/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:33:11 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/30 13:33:12 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void*)0)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, (*applyf));
	btree_apply_prefix(root->right, (*applyf));
}
