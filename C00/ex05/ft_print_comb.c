/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:26:58 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/21 21:27:46 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_all(char a, char b, char c, bool truue)
{
	ft_print(a);
	ft_print(b);
	ft_print(c);
	if (truue)
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	bool truue;

	a = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				truue = !(a == '7' && b == '8' && c == '9');
				ft_print_all(a, b, c, truue);
				++c;
			}
			++b;
		}
		++a;
	}
}
