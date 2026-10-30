/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:45:09 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/22 11:36:50 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("ma ft    : %ld\n", ft_strlen("Testlenght"));
// 	printf("vrai ft  : %ld\n", strlen("Testlenght"));
// 	printf("ma ft    : %ld\n", ft_strlen("A \t"));
// 	printf("vrai ft  : %ld\n", strlen("A \t"));
// 	return (0);
// }
