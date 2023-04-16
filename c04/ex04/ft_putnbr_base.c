/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:25 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/18 15:26:52 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check_double(char *str)
{
	int	i;
	int	p;

	i = 0;
	while (str[i] != '\0')
	{
		p = i + 1;
		while (str[p] != '\0')
		{
			if (str[p] == str[i] || str[p] == '+' || str[p] == '-')
				return (1);
			p++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nblong;

	nblong = nbr;
	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	if (check_double(base) == 1 || len_base <= 1)
		return ;
	if (nblong < 0)
	{
		nblong *= -1;
		write(1, "-", 1);
	}
	if (nblong < len_base)
		ft_putchar(base[nblong]);
	else
	{
		ft_putnbr_base((nblong / len_base), base);
		ft_putnbr_base((nblong % len_base), base);
	}
}

/*int	main(int argc, char **argv)
{
	int	n;

	n = atoi(argv[1]);
	if (argc == 3)
	{
		ft_putnbr_base(n, argv[2]);
	}
	return (0);
}*/
