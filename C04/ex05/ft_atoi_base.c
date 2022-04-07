/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:08:25 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/26 18:13:08 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 31)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base_recursive(int n, char *base, int numeric_base)
{
	if (n == -2147483648)
	{
		ft_putnbr_base_recursive(n / numeric_base, base, numeric_base);
		write(1, &(base[-(n % numeric_base)]), 1);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n > numeric_base - 1)
			ft_putnbr_base_recursive(n / numeric_base, base, numeric_base);
		write(1, &(base[n % numeric_base]), 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int numeric_base;

	numeric_base = ft_strlen(base);
	if (!numeric_base)
		return ;
	ft_putnbr_base_recursive(nbr, base, numeric_base);
}

int		ft_atoi(char *str)
{
	int a;
	int minus;
	int number;

	a = 0;
	minus = 1;
	number = 0;
	while (*str)
	{
		if (a > 0 && (!(*str > 47 && *str < 58)))
			break ;
		if (*str == '-')
			minus *= -1;
		if (*str > 47 && *str < 58)
		{
			number *= 10;
			number += *str - '0';
			++a;
		}
		++str;
	}
	return (number * minus);
}

int		ft_atoi_base(char *str, char *base)
{
	ft_putnbr_base(ft_atoi(str), base);
}
