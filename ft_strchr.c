/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:05:40 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 20:38:37 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == 0 && c == 0)
		return ((char *) s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello World!";
// 	const char	*str2 = "Treslongtest";
// 	const char	*str3 = "Hi\0Hitest";
// 	const char	*str4 = "HiHitest";

// 	printf("ma ft   : %s\n", ft_strchr(str, 'W'));
// 	printf("vrai ft : %s\n", strchr(str, 'W'));
// 	printf("ma ft   : %s\n", ft_strchr(str2, 'e'));
// 	printf("vrai ft : %s\n", strchr(str2, 'e'));
// 	printf("ma ft   : %s\n", ft_strchr(str3, '\0'));
// 	printf("vrai ft : %s\n", strchr(str3, '\0'));
// 	printf("ma ft   : %s\n", ft_strchr(str4, 'A'));
// 	printf("vrai ft : %s\n", strchr(str4, 'A'));
// 	return (0);
// }
