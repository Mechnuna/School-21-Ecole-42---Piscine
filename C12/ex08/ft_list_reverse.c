/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:57:31 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/04 22:59:58 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *pop;
	t_list *pop2;
	t_list *pop3;

	if (*begin_list == 0)
		return ;
	pop = *begin_list;
	while (pop != NULL)
	{
		pop2 = pop->next;
		pop->next = pop3;
		pop3 = pop;
		pop = pop2;
	}
	*begin_list = pop3;
}
