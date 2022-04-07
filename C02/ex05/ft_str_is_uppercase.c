/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:49:52 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/23 19:16:55 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		k;
	int		a;
	char	j;

	a = 0;
	k = 0;
	while (str[a] != '\0')
	{
		j = str[a];
		if (!(j >= 'A' && j <= 'Z'))
		{
			++k;
			break ;
		}
		++a;
	}
	if (k > 0)
	{
		a = 0;
	}
	else
	{
		a = 1;
	}
	return (a);
}
