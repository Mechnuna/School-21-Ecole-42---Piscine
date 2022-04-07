/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:20:49 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/10 20:20:51 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void			ressset(void)
{
	g_maps = (const t_settings){0, 0, 0, 0, 0, 0, {0, 0, 0}};
}

int				check_map(void)
{
	int		i;
	int		len;
	char	sstr[15];

	len = readline(sstr);
	if (len < 4 || len > 13)
		return (0);
	g_maps.full = sstr[--len];
	g_maps.obstacle = sstr[--len];
	g_maps.empty = sstr[--len];
	if (g_maps.full == g_maps.obstacle ||
	g_maps.full == g_maps.empty || g_maps.empty == g_maps.obstacle)
		return (0);
	i = 0;
	while (i < len)
	{
		if (sstr[i] < '0' || sstr[i] > '9')
			return (0);
		g_maps.rows = g_maps.rows * 10 + sstr[i++] - '0';
	}
	return (g_maps.rows);
}

int				readline(char *buf)
{
	char	c;
	int		i;

	c = '\0';
	i = 0;
	while (c != '\n' && i < 14)
	{
		read(g_maps.file, &c, 1);
		buf[i++] = c;
	}
	buf[--i] = '\0';
	return (i);
}

void			set_max(unsigned short size, int x, int y)
{
	g_maps.max.size = size;
	g_maps.max.x = x;
	g_maps.max.y = y;
}

unsigned short	min(unsigned short a, unsigned short b, unsigned short c)
{
	unsigned short	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}
