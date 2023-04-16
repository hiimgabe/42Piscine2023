/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:37:49 by gamoreir          #+#    #+#             */
/*   Updated: 2023/02/22 20:26:21 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (check_sep(str[i], charset) == 1)
				words++;
		}
		if (check_sep(str[i], charset) == 1
			&& check_sep(str[i - 1], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

int	ft_strlenword(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && check_sep(str[i], charset) == 1)
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	char	*cpy;
	int		size;

	size = ft_strlenword(str, charset);
	cpy = (char *)malloc(sizeof (*cpy) * (size + 1));
	if (!cpy)
		return (0);
	i = 0;
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**split;
	int		sizesplit;

	sizesplit = count_words(str, charset);
	split = (char **)malloc(sizeof (*split) * (sizesplit + 1));
	if (!split)
		return (0);
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str, charset) == 0)
			str++;
		if (*str != '\0')
		{
			split[i] = ft_strdup(str, charset);
			i++;
		}
		while (*str != '\0' && check_sep(*str, charset) == 1)
			str++;
	}
	split[i] = 0;
	return (split);
}
/*
int	main(int argc, char **argv)
{
	char	**arr;
	int	i = 0 , j = 0;
	arr = ft_split(argv[1], ",");
	if (argc == 2)
	{
		while (i < 4)
		{
			j = 0;
			while (arr[i][j] != '\0')
			{
				printf("%c", arr[i][j]);
				j++;
			}
			printf("\n");
			i++;
		}
	}
	return (0);
}*/
