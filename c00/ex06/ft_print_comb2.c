/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <gamoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:22:37 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/05 18:35:08 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_n(int a, int b)
{
	int	valorinteiroa;
	int	restoa;
	int	valorinteirob;
	int	restob;

	valorinteiroa = (a / 10) + 48;
	restoa = (a % 10) + 48;
	valorinteirob = (b / 10) + 48;
	restob = (b % 10) + 48;
	write (1, &valorinteiroa, 1);
	write (1, &restoa, 1);
	write (1, " ", 1);
	write (1, &valorinteirob, 1);
	write (1, &restob, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 00;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			print_n (a, b);
			if (a == 98 && b == 99)
			{
			}
			else
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}
