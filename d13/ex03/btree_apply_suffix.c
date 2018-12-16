/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:24:40 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/30 15:24:41 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void*)0)
		return ;
	btree_apply_suffix(root->left, (*applyf));
	btree_apply_suffix(root->right, (*applyf));
	applyf(root->item);
}
