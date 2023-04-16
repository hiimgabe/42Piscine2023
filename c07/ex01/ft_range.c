/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:43:07 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/22 19:23:57 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *) malloc(sizeof (*range) * (max - min));
	if (!(range))
		return (NULL);
	while (min < max)
		range[i++] = min++;
	return (range);
}
/*
int	main(int argc, char **argv)
{
	int	i = 0;
	int	n1 = atoi(argv[1]);
	int	n2 = atoi(argv[2]);
	int	*range = ft_range(n1, n2);
	int	size = n2 - n1;

	if (argc == 3)
	{
		while (i < size)
		{
			printf("%d ", range[i++]);
		}
	}
	return (0);
}*/
