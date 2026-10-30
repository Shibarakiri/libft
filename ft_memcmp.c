/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:23:29 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/27 11:26:43 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello";
// 	const char	*str2 = "Hello, World!";
// 	const char	*str3 = "Hi\0Test";
// 	const char	*str4 = "Hi\0Aest";

// 	printf("ma ft   : %d\n", ft_memcmp(str, str2, 3));
// 	printf("vrai ft : %d\n", memcmp(str, str2, 3));
// 	printf("ma ft   : %d\n", ft_memcmp(str, str2, 20));
// 	printf("vrai ft : %d\n", memcmp(str, str2, 20));
// 	printf("ma ft   : %d\n", ft_memcmp(str3, str4, 5));
// 	printf("vrai ft : %d\n", memcmp(str3, str4, 5));
// 	printf("ma ft   : %d\n", ft_memcmp(str3, str4, 2));
// 	printf("vrai ft : %d\n", memcmp(str3, str4, 2));
// 	return (0);
// }
