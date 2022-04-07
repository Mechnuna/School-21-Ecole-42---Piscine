/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdahlia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:44:11 by cdahlia           #+#    #+#             */
/*   Updated: 2021/01/24 17:50:42 by sstyx            ###   ########.fr       */
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
			print_symbol2(x, 47, 42, 92);
			ft_putchar('\n');
		}
		else if (zero == y)
		{
			print_symbol2(x, 92, 42, 47);
			ft_putchar('\n');
		}
		else
		{
			print_symbol(x, 42, 32);
			ft_putchar('\n');
		}
		++zero;
	}
}
