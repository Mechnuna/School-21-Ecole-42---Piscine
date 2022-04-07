/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:19:20 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/24 18:27:49 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*pop;

	pop = dest;
	while (*pop != '\0')
		pop++;
	while (nb > 0 && *src != '\0')
	{
		*pop = *src;
		pop++;
		src++;
		--nb;
	}
	*pop = '\0';
	return (dest);
}
