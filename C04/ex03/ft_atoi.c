/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:21:08 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/26 17:01:55 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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
