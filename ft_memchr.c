/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:32:03 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/22 11:34:21 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *) s;
	while (n--)
	{
		if (*str == (unsigned char) c)
			return ((void *) str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	const char	*str2 = "Longtestttt";
// 	const char	*str3 = "Hi\0Hitest";

// 	printf("ma ft   : %s\n", (char *) ft_memchr(str, 'W', 13));
// 	printf("vrai ft : %s\n", (char *) memchr(str, 'W', 13));
// 	printf("ma ft   : %s\n", (char *) ft_memchr(str2, 't', 6));
// 	printf("vrai ft : %s\n", (char *) memchr(str2, 't', 6));
// 	printf("ma ft   : %s\n", (char *) ft_memchr(str3, '\0', 30));
// 	printf("vrai ft : %s\n", (char *) memchr(str3, '\0', 30));
// 	return (0);
// }
