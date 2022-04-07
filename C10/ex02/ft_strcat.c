/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:31:59 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/02 21:55:58 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
	++a;
	}
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*comb;
	int		i;
	int		a;

	
	i = 0;
	comb = (char*)malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) +1));
	while (dest[i])
	{
		comb[i] = dest[i];
		++i;
	}
	a = 0;
	while (src[a])
	{
		comb[i] = src[a];
		++i;
		++a;
	}
	comb[i] = '\0';
		return (comb);
}

char	*ft_strcatch(char *dest, char src)
{
	char	*comb;
	int		i;

	comb = (char*)malloc(sizeof(char) * (ft_strlen(dest) + 1+ 1));
	i = 0;
	while (dest[i])
	{
		comb[i] = dest [i];
		++i;
	}
	comb[i] = src;
	comb[i + 1] = '\0';
		return (comb);
}
