/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:34:43 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/21 15:53:32 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	int		i;
	int		*final = NULL;
	long	nblong;

	nblong = nbr;
	len_base = 0;
	i = 0;
	while (base[len_base] != '\0')
		len_base++;
	if (check_double(base) == 1 || len_base <= 1)
		return (0);
	if (nblong < 0)
		nblong *= -1;
	if (nblong < len_base)
		final[i++] = base[nblong];
	else
	{
		ft_putnbr_base((nblong / len_base), base);
		ft_putnbr_base((nblong % len_base), base);
	}
	return (*final);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	vatoi;
	int	final;

	vatoi = ft_atoi(str);
	final = ft_putnbr_base(vatoi, base);
	return (final);
}

int	main(void)
{
	printf("%d", ft_atoi_base(" ---+--+1234ab567", "01234567"));
	return (0);
}
