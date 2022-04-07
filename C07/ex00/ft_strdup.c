/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:19:37 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/28 17:49:56 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		++a;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*pop;
	int		a;

	a = 0;
	if ((pop = (char*)malloc(sizeof(char) * (count(src) + 1))) == NULL)
		return (0);
	else
	{
		while (src[a])
		{
			pop[a] = src[a];
			++a;
		}
		pop[a] = '\0';
		return (pop);
	}
}
