/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 22:09:55 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/05 22:29:54 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int left;
	int right;

	left = 0;
	right = 0;
	if (root)
	{
		left = btree_level_count(root->left);
		right = btree_level_count(root->right);
		return (left > right ? left + 1 : right + 1);
	}
	else
		return (0);
}
