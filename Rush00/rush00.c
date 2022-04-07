/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdahlia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:39:04 by cdahlia           #+#    #+#             */
/*   Updated: 2021/01/24 18:02:53 by sstyx            ###   ########.fr       */
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

void	rush(int x, int y)
{
	int zero;

	zero = 1;
	while (zero <= y)
	{
		if (zero == 1 || zero == y)
		{
			print_symbol(x, 'o', '-');
			ft_putchar('\n');
		}
		else
		{
			print_symbol(x, '|', ' ');
			ft_putchar('\n');
		}
		++zero;
	}
}
