/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:58:20 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/21 12:30:54 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = ((const char *) src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test[100];
// 	char	test1txt[100] = "Abcdefgewfdfwrfergdfsrfwr";
// 	char	test2txt[100] = "Testlong";
// 	char	test3txt[100] = "Treslongtest";

// 	printf("ma ft    : %s\n", (char *) ft_memcpy(test, test1txt, 5));
// 	printf("vrai ft  : %s\n", (char *) memcpy(test, test1txt, 5));
// 	printf("ma ft    : %s\n", (char *) ft_memcpy(test, test2txt, 7));
// 	printf("vrai ft  : %s\n", (char *) memcpy(test, test2txt, 7));
// 	printf("ma ft    : %s\n", (char *) ft_memcpy(test, test3txt, 10));
// 	printf("vrai ft  : %s\n", (char *) memcpy(test, test3txt, 10));
// 	return (0);
// }
