/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:13:24 by sstyx             #+#    #+#             */
/*   Updated: 2021/02/03 22:18:58 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calcu.h"
#include <stdio.h>

int		calcu(int a, int b, char c)
{
	int		k;

	k = 0;
	if (c == '/')
		k = a / b;
	else if (c == '%')
		k = a % b;
	else if (c == '+')
		k = a + b;
	else if (c == '-')
		k = a - b;
	return (k);
}

char	operator(char *c)
{
	if (c[0] == '+' || c[0] == '-' || c[0] == '*' ||
			c[0] == '/' || c[0] == '%')
		return (c[0]);
	else
		return ('0');
}

void	error(char c)
{
	if (c == '/')
		write(1, "Stop: division by zero\n", 23);
	if (c == '%')
		write(1, "Stop: modulo by zero\n", 21);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		z;
	char	c;

	a = 0;
	b = 0;
	z = 0;
	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		c = operator(argv[2]);
		b = ft_atoi(argv[3]);
		if ((b == 0 && c == '/') || (b == 0 && c == '%'))
		{
			error(c);
			return (0);
		}
		else if (c != '0')
			z = calcu(a, b, c);
		ft_putnbr(z);
		write(1, "\n", 1);
	}
}
