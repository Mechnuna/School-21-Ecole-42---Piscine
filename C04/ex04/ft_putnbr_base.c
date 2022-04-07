/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:05:26 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/26 18:00:05 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int		valid_base(char *str)
{
	char	*znak;
	int		index;
	int		index2;

	znak = str;
	if (ft_strlen(str) < 2)
		return (0);
	while (*znak)
	{
		if (*znak == '\t' || *znak == '\n' || *znak == '\v' || *znak == '\f'
			|| *znak == '\r' || *znak == ' ' || *znak == '+' || *znak == '-')
			return (0);
		znak++;
	}
	index = 0;
	while (index < znak - str)
	{
		index2 = index + 1;
		while (index2 < znak - str)
			if (str[index] == str[index2++])
				return (0);
		index++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(int number, char *base, int count)
{
	if (number == -2147483648)
	{
		ft_putnbr_base_recursive(number / count, base, count);
		write(1, &(base[-(number % count)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-number, base, count);
		return ;
	}
	if (number > count - 1)
		ft_putnbr_base_recursive(number / count, base, count);
	write(1, &(base[number % count]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		count;

	if (valid_base(base) == 0)
		return ;
	count = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, count);
}
