/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:08:27 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/20 17:25:13 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *) malloc(sizeof (*tab) * (max - min));
	if (!(tab))
		return (-1);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
/*
int	main(void)
{
	int	i = 0;
	int	mn = -10;
	int	mx = 20;
	int	size;
	int	*rg;
	       
	size = ft_ultimate_range(&rg, mn, mx);
	while (i < 30)
		printf("%d ", rg[i++]);
	printf("\n");
	printf("size: %d\n", size);
	return (0);
}*/
