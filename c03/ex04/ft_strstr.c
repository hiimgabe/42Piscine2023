/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:38:04 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/16 09:38:52 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] != '\0' && to_find[f] == str[i + f])
		{
			if (to_find[f + 1] == '\0')
				return (&str[i]);
			f++;
		}
		i++;
	}
	return (0);
}
