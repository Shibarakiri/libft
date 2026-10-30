/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:20:11 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/27 11:27:05 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = ft_strlen(src);
	i = 0;
	while (dlen < size && dest[dlen])
		dlen++;
	if (dlen == size)
		return (size + slen);
	while (src[i] && i < size - dlen - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	dest[50] = "Hello, ";
// 	char	dest2[50] = "Hello, ";
// 	char	dest3[50] = "Hi\0Hi";
// 	char	dest4[50] = "Hi\0Hi";

// 	printf("ma ft   : %ld\n", ft_strlcat(dest, "World!", 80));
// 	printf("str     : %s\n", dest);
// 	printf("vrai ft : %ld\n", strlcat(dest2, "World!", 80));
// 	printf("str     : %s\n\n", dest2);
// 	printf("ma ft   : %ld\n", ft_strlcat(dest3, "Longtest", 80));
// 	printf("str     : %s\n", dest3);
// 	printf("vrai ft : %ld\n", strlcat(dest4, "Longtest", 80));
// 	printf("str     : %s\n", dest4);
// 	return (0);
// }
