/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:42:58 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/23 19:16:34 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		k;
	int		a;
	char	j;

	a = 0;
	k = 0;
	while (str[a] != '\0')
	{
		j = str[a];
		if (!(j >= 'a' && j <= 'z'))
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
