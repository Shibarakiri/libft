/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:55:43 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 20:38:15 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	d;

	d = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[d] != '\0' && ft_strchr(set, s1[d]))
		d++;
	while (end > d && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, d, end - d));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strtrim(NULL, "");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strtrim("  salut  ", " ");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strtrim("xxxhelloxx", "x");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strtrim("ababhelloabba", "ab");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strtrim("xxxx", "x");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	return (0);
// }
