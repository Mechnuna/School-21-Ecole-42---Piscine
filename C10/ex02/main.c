/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:25:31 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/02 19:11:49 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <libgen.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include "ft_tail.h"
void	print(char *c)
{
	while (*c)
	{
		write(2, c, 1);
		++c;
	}
}

void	show_error(char *c, char *path)
{
	print(basename(c));
	print(": ");
	print(path);
	print(": ");
	print(strerror(errno));
	print("\n");
}

int		ft_display(char *c, char *b)
{
	int		y;
	char	buffer[MAX];
	int		k;

	if (b == NULL)
		k = 0;
	else if ((k = open(b, O_RDONLY)) < 0)
	{
	 	show_error(c, b);
		return (0);
	}
	while ((y = read(k, buffer, MAX)) > 0)
	{
		write(1, &buffer, y);
	}
	if ((y = read(k, buffer, MAX)) < 0)
		show_error(c, b);
	close(k);
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;

	a = 1;
	if (argc < 2)
	{
		ft_display(NULL, NULL);
	}
	else
	{
		while (argc > a)
		{
			ft_display(argv[0], argv[a]);
			++a;
		}
	}
}
