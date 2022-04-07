/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 22:45:55 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/22 23:22:55 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int mas;

	a = 0;
	while (a < size / 2)
	{
		mas = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = mas;
		a++;
	}
}
