/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:49:20 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/17 12:48:52 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_write(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	while (i < argc)
	{
		p = 0;
		while (argv[i][p] != '\0')
		{
			ft_putchar(argv[i][p]);
			p++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c[1];

	c[0] = *a;
	*a = *b;
	*b = c[0];
}

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	p = 0;
	if (argc >= 1)
	{
		while (i < argc -1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
			{
				ft_swap(&argv[i], &argv[i +1]);
				i = 0;
			}
			p = 0;
			i++;
		}
		i = 1;
		ft_write(argc, argv);
	}
	return (0);
}
