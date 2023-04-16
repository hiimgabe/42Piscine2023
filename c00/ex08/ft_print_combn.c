/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:14:35 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/06 11:01:10 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void teste(void)
{
	write (1, "teste", 5);
}

void	ft_print_combn(int n)
{
	int i;
	char c[n];

	i = 0;

	if (1 == n)
	{
		while (i <= '9')
		{
			write (1, &i, 1);
			if (i == '9')
			{
			}
			else
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			i++;
		}
	}

	if (1 < n)
	{
		while (n > i)
		{
			while (i <= '9')
			{
				teste();
				if (i == '9')
				{
				}
				else
				{
					write (1, ",", 1);
					write (1, " ", 1);
				}
				i++;
			}
		}
	}
}
