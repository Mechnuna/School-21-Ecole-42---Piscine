/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:59:32 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/29 22:06:58 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(char *str)
{
	int		a;

	a = 0;
	while (str[a])
		++a;
	return (a);
}

char	*ft_strcpy(char *hop, char *pop)
{
	int		a;

	a = 0;
	while (pop[a] != '\0')
	{
		hop[a] = pop[a];
		++a;
	}
	hop[a] = '\0';
	return (hop);
}

int		ft_finall_length(char **strings, int size, int huaze)
{
	int		final_length;
	int		a;

	final_length = 0;
	a = 0;
	while (a < size)
	{
		final_length += ft_length(strings[a]);
		final_length += huaze;
		a++;
	}
	final_length -= huaze;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		a;
	char	*jops;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_finall_length(strs, size, ft_length(sep));
	if (!(string = (char *)malloc((full_length + 1) * sizeof(char))))
		return (0);
	jops = string;
	a = 0;
	while (a < size)
	{
		ft_strcpy(jops, strs[a]);
		jops += ft_length(strs[a]);
		if (a < size - 1)
		{
			ft_strcpy(jops, sep);
			jops += ft_length(sep);
		}
		++a;
	}
	*jops = '\0';
	return (string);
}
