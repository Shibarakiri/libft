/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:29:38 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/20 16:49:33 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	test1[100] = "Testlong";
// 	char	test2[20] = "Abcdefghij";
// 	char	vtest1[100] = "Testlong";
// 	char	vtest2[20] = "Abcdefghij";

// 	ft_bzero(test1, 5);
// 	ft_bzero(test2, 3);
// 	printf("ma ft    : %s\n", test1);
// 	printf("ma ft    : %s\n", test2);
// 	bzero(vtest1, 5);
// 	bzero(vtest2, 3);
// 	printf("vrai ft  : %s\n", test1);
// 	printf("vrai ft  : %s\n", test2);
// 	return (0);
// }
