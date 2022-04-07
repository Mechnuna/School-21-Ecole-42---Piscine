/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:54:32 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/23 19:17:17 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		k;
	int		a;
	char	j;

	a = 0;
	k = 0;
	while (str[a] != '\0')
	{
		j = str[a];
		if (!(j >= ' ' && j <= 127))
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
