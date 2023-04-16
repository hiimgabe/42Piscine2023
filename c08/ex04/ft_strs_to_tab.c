/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:09:25 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/22 22:10:22 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str, int size)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(*new) * size + 1);
	if (!(new))
		return (0);
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(*tab) * (ac + 1));
	if (!(tab))
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i], tab[i].size);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	t_stock_str	*arr;

	i = 1;	
	arr = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
		printf("Str: %s\ncopy:%s\nsize:%d\n", arr[i].str, arr[i].copy, arr[i].size);
		i++;
	}
	free (arr);
	return (0);
}*/
