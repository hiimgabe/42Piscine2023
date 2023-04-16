/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:21:19 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/20 13:19:00 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int	n;
	int	p;

	n = atoi(argv[1]);
	p = atoi(argv[2]);
	if (argc == 3)
	{
		printf("Result : %d", ft_iterative_power(n, p));
	}
	return (0);
}*/
