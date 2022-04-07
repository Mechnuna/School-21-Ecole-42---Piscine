/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstyx <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:16:18 by sstyx             #+#    #+#             */
/*   Updated: 2021/01/26 18:46:19 by sstyx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;
	int fakt;

	if (nb > 0)
	{
		fakt = nb;
		a = 1;
		while (a < fakt)
		{
			nb = nb * a;
			++a;
		}
		return (nb);
	}
	if (nb < 0)
		return (0);
	else
		return (1);
}
