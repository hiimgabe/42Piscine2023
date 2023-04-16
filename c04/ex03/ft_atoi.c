/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:39:54 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/16 11:06:34 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signs;
	int	n;

	i = 0;
	signs = 0;
	n = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signs++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (n * 10 + (str[i] - 48));
		i++;
	}
	if (signs % 2 == 0)
		return (n);
	else
		return (-n);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d",ft_atoi(argv[1]));
	return (0);
}*/
