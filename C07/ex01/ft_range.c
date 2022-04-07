/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:54:34 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/28 19:32:09 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *pop;
	int a;
	int b;

	a = 0;
	if (min >= max)
		return (0);
	b = max - min;
	if ((pop = malloc(sizeof(int) * b)) == NULL)
		return (0);
	else
		while (a < b)
		{
			pop[a] = min + a;
			++a;
		}
	return (pop);
}
