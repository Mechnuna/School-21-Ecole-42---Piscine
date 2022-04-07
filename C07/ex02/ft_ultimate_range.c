/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:10:25 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/29 20:24:49 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int a;
	int b;
	int *pop;

	a = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	b = max - min;
	if ((pop = malloc(sizeof(int) * b)) == NULL)
		return (-1);
	*range = pop;
	while (a < b)
	{
		pop[a] = min + a;
		++a;
	}
	return (b);
}
