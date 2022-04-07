/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:08:05 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/22 22:30:22 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void	ft_putstr(char *str)
{
	char her;

	while (true)
	{
		her = *str;
		if (her == '\0')
		{
			break ;
		}
		write(1, &her, 1);
		str++;
	}
}
