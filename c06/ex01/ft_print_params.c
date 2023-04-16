/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:13:52 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/16 15:24:02 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i] != NULL)
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
	return (0);
}
