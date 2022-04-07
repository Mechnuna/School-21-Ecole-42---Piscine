/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:08:58 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/27 17:16:42 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int a;

	(void)argv;
	(void)argc;
	a = argc - 1;
	while (a >= 1)
	{
		print(argv[a]);
		print("\n");
		--a;
	}
	return (0);
}
