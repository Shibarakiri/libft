/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:43:37 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/29 15:24:42 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*result;
//
// 	result = ft_substr("Tres peux long test", 6, 6);
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_substr("Tres          \t long vsd", 6, 700);
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_substr("Hitesthi", 0, 0);
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_substr("\\\\U\\\\   w   \t\n  JSIOJ", 7, 4);
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	return (0);
// }
