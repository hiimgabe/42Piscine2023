/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <gamoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:23:41 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/06 14:38:51 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int na, int nb, int nc)
{
	write(1, &na, 1);
	write(1, &nb, 1);
	write(1, &nc, 1);
	if (na < '7' || nb < '8' || nc < '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	na;
	int	nb;
	int	nc;

	na = 48;
	while (na <= '7')
	{
		nb = na + 1;
		while (nb <= '8')
		{
			nc = nb + 1;
			while (nc <= '9')
			{
				if (na != nb && na != nc && nb != nc)
				{
					ft_print(na, nb, nc);
				}
				nc++;
			}
			nb++;
		}
		na++;
	}
}
