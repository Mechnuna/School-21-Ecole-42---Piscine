/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:23:44 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/27 21:04:53 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int a;
	int b;

	a = 1;
	b = 0;
	if (nb == 2147483647)
		return (nb);
	if (nb <= a)
		return (2);
	while (a < nb)
	{
		if (nb % a == 0)
		{
			++b;
		}
		++a;
	}
	if (b > 2)
		return (ft_find_next_prime(++nb));
	else
		return (nb);
}
