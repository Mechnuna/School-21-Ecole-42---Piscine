/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:19:40 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/10 20:37:23 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int				find(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

unsigned short	get_elem(unsigned short **m, int i, int j)
{
	if (i < 0 || j < 0)
		return (0);
	return (m[i][j]);
}

int				fill_cell(unsigned short **mass, int row, int col, char c)
{
	if (c == g_maps.obstacle)
		mass[row][col] = 0;
	else if (c == g_maps.empty)
	{
		mass[row][col] = 1 + min(get_elem(mass, row, col - 1),
				get_elem(mass, row - 1, col - 1), get_elem(mass, row - 1, col));
		if (mass[row][col] > g_maps.max.size)
			set_max(mass[row][col], row, col);
	}
	else
		return (0);
	return (1);
}

char			*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
