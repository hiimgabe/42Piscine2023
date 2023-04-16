/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:49:15 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/20 13:20:36 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(int argc, char **argv)
{
	int	n;
	int	p;

	n = atoi(argv[1]);
	p = atoi(argv[2]);
	if(argc == 3)
	{
		printf("Result : %d", ft_recursive_power(n, p));
	}
	return (0);
}*/
