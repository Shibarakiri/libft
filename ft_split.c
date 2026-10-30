/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 21:27:42 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/27 11:26:54 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countw(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static void	freeall(char **arr, size_t count)
{
	while (count > 0)
		free(arr[--count]);
	free(arr);
}

static int	fill(char const *str, char c, char **arr)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > j)
		{
			arr[k] = ft_substr(str, j, i - j);
			if (!arr[k])
			{
				freeall(arr, k);
				return (0);
			}
			k++;
		}
	}
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**arr;

	if (!str)
		return (NULL);
	arr = ft_calloc(countw(str, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	if (!fill(str, c, arr))
		return (NULL);
	return (arr);
}

// #include <stdio.h>

// static void	test(char *str, char c)
// {
// 	char	**words;
// 	int		i;

// 	words = ft_split(str, c);
// 	i = 0;
// 	while (words && words[i])
// 	{
// 		printf("Les mot: %s\n", words[i]);
// 		free(words[i++]);
// 	}
// 	free(words);
// 	printf("\n");
// }

// int	main(void)
// {
// 	test("  bonjour   le monde  ", ' ');
// 	test(NULL, ' ');
// 	test("QWERTY\\\\A\t\\ABC A\\\\\\a\\\\", '\\');
// 	return (0);
// }
