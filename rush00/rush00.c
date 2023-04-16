/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <gamoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:25:21 by jduraes-          #+#    #+#             */
/*   Updated: 2023/02/05 15:45:28 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	valores_invalidos(int x, int y)
{
	if (x == 0)
	{
		if (y > 0)
			write (1, "X value can't be zero.\n", 23);
		else
			write (1, "X and Y values can't be zero.\n", 30);
	}
	else if (y == 0)
		write (1, "Y value can't be zero.\n", 23);
	else if (x < 0)
	{
		if (y < 0)
			write (1, "X and Y values can't be negative.\n", 34);
		else if (y == 0)
			write (1, "X value can't be negative and Y can't be zero.\n", 47);
		else
			write (1, "X value can't be negative.\n", 27);
	}
	else if (y < 0)
		write (1, "Y value can't be negative.\n", 27);
}

void	imprime_quadrado(int i, int j, int x, int y)
{
	if (((i == 0) || (i == x - 1)) && (j == 0))
		ft_putchar('o');
	else if (((i > 0) && (i < x - 1)) && ((j == 0) || (j == y - 1)))
		ft_putchar('-');
	else if (((i == 0) || (i == x - 1)) && ((j > 0) && (j < y - 1)))
		ft_putchar('|');
	else if (((i > 0) && (i < x - 1)) && ((j > 0) && (j < y - 1)))
		ft_putchar(' ');
	else if ((i == 0 || (i == x - 1)) && (j == y - 1))
		ft_putchar('o');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if ((x > 0) && (y > 0))
	{
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				imprime_quadrado(i, j, x, y);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
	else
	{
		valores_invalidos(x, y);
	}
}
