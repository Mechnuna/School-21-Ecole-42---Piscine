/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:18:30 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/10 20:36:49 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		solve(unsigned short **mass, char *str)
{
	int	row;
	int	col;

	row = 0;
	g_maps.lines = find(str, '\n');
	while (row < g_maps.rows)
	{
		mass[row] = malloc(sizeof(unsigned short) * g_maps.lines);
		col = 0;
		while (col < g_maps.lines)
		{
			if (!fill_cell(mass, row, col, *str))
				return (0);
			str++;
			col++;
		}
		if (*str != '\n')
			return (0);
		str++;
		row++;
	}
	if (*str)
		return (0);
	return (1);
}

char	*read_buf(void)
{
	char	*buf;
	char	*old_buf;
	size_t	buf_size;
	size_t	len;
	size_t	bit;

	len = 0;
	buf_size = 1;
	buf = (char *)malloc(sizeof(char) * (buf_size + 1));
	while ((bit = read(g_maps.file, buf + len, buf_size)) > 0)
	{
		len += bit;
		if (buf_size < 536870912)
			buf_size *= 2;
		buf[len] = '\0';
		old_buf = buf;
		buf = (char *)malloc(sizeof(char) * (len + buf_size + 1));
		ft_strcpy(buf, old_buf);
		free(old_buf);
	}
	return (buf);
}

void	print_mass(unsigned short **mass)
{
	int row;
	int col;

	row = 0;
	while (row < g_maps.rows)
	{
		col = 0;
		while (col < g_maps.lines)
		{
			if (!mass[row][col])
				write(1, &g_maps.obstacle, 1);
			else if (row > g_maps.max.x - g_maps.max.size
					&& row <= g_maps.max.x
					&& col > g_maps.max.y - g_maps.max.size
					&& col <= g_maps.max.y)
				write(1, &g_maps.full, 1);
			else
				write(1, &g_maps.empty, 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int		bsq(char *filename)
{
	char			*str;
	unsigned short	**mass;

	ressset();
	if (filename)
		g_maps.file = open(filename, O_RDONLY);
	if (g_maps.file < 0 || !check_map())
		return (0);
	str = read_buf();
	mass = (unsigned short **)malloc(sizeof(unsigned short *) * g_maps.rows);
	if (!solve(mass, str))
		return (0);
	print_mass(mass);
	if (filename)
		close(g_maps.file);
	return (1);
}

int		main(int argc, char **argv)
{
	int a;

	if (argc > 1)
	{
		a = 1;
		while (a < argc)
		{
			if (!bsq(argv[a]))
				write(2, "map error\n", 10);
			a++;
			if (a != argc && argc > 2)
				write(1, "\n", 1);
		}
	}
	else if (!bsq(0))
		write(2, "map error\n", 10);
	return (0);
}
