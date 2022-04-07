/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:59:50 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/02 21:24:13 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int a;
	int *pop;

	if (!(pop = malloc(length * sizeof(int))))
		return (0);
	a = 0;
	while (length > a)
	{
		pop[a] = (*f)(tab[a]);
		++a;
	}
	return (pop);
}
