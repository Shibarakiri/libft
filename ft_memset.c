/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:58:14 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/21 12:14:56 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = (char) c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test1[100] = "Testlong";
// 	char	test2[20] = "Abcdefghij";

// 	printf("ma ft    : %s\n", (unsigned char *) ft_memset(test1, 126, 5));
// 	printf("vrai ft  : %s\n", (unsigned char *) memset(test1, 126, 5));
// 	printf("ma ft    : %s\n", (unsigned char *) ft_memset(test2, '#', 3));
// 	printf("vrai ft  : %s\n", (unsigned char *) memset(test2, '#', 3));
// 	return (0);
// }
