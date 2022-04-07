/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 21:55:15 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/05 23:26:35 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *a;

	a = root;
	if (a)
	{
		if ((*cmpf)(data_ref, a->iterm) > 0 && a->right)
			return (btree_search_item(a->right, data_ref, cmpf));
		else if ((*cmpf)(data_ref, a->iterm) < 0 && a->left)
			return (btree_search_item(a->left, data_ref, cmpf));
		else if ((*cmpf)(data_ref, a->iterm) == 0)
			return (a->iterm);
	}
	return (0);
}
