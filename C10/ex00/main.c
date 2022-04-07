/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:13:09 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/02 11:44:15 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	print(char *c)
{
	while (*c)
	{
		write(2, c, 1);
		++c;
	}
}

int		ft_display(char *c)
{
	int		a;
	int		y;
	char	buffer[MAX];

	if ((a = open(c, O_RDONLY)) < 0)
	{
		print(ERR_READ);
		return (0);
	}
	while ((y = read(a, buffer, MAX)) > 0)
	{
		write(1, &buffer[0], y);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		print(ERR_MANY);
		return (0);
	}
	if (argc < 2)
	{
		print(ERR_MIS);
		return (0);
	}
	else
	{
		ft_display(argv[1]);
	}
}
