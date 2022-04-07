/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdahlia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:12:03 by cdahlia           #+#    #+#             */
/*   Updated: 2021/01/24 18:00:00 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_symbol(int num, char first, char second)
{
	int count;

	count = 0;
	while (count < num)
	{
		if (count == 0 || count == (num - 1))
			ft_putchar(first);
		else
		{
			ft_putchar(second);
		}
		++count;
	}
}

void	print_symbol2(int num, char first, char second, char three)
{
	int count;

	count = 0;
	while (count < num)
	{
		if (count == 0)
		{
			ft_putchar(first);
		}
		else if (count == (num - 1))
		{
			ft_putchar(three);
		}
		else
		{
			ft_putchar(second);
		}
		++count;
	}
}

void	rush(int x, int y)
{
	int zero;

	zero = 1;
	while (zero <= y)
	{
		if (zero == 1)
		{
			print_symbol2(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		else if (zero == y)
		{
			print_symbol2(x, 'C', 'B', 'A');
			ft_putchar('\n');
		}
		else
		{
			print_symbol(x, 'B', ' ');
			ft_putchar('\n');
		}
		++zero;
	}
}
