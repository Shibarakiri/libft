/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:40:01 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/29 15:27:31 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d <= s)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		d[n] = s[n];
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test1[50] = "abcdef";
// 	char	test2[50] = "HiHitest";
// 	char	test3[50] = "qwerty";
// 	char	test4[50] = "tomasin";

// 	printf("ma ft   : %s\n", (char *) ft_memmove(test1, "Treslongtest", 5));
// 	printf("vrai ft : %s\n", (char *) memmove(test1, "Treslongtest", 5));
// 	printf("ma ft   : %s\n", (char *) ft_memmove(test2, "         ", 4));
// 	printf("vrai ft : %s\n", (char *) memmove(test2, "         ", 4));
// 	printf("ma ft   : %s\n", (char *) ft_memmove(test3, "Hello", 0));
// 	printf("vrai ft : %s\n", (char *) memmove(test3, "Hello", 0));
// 	printf("ma ft   : %s\n", (char *) ft_memmove(test4, "World", 1));
// 	printf("vrai ft : %s\n", (char *) memmove(test4, "World", 1));
// 	return (0);
// }
