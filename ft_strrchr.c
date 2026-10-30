/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:44:19 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 20:38:46 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char) c)
			return ((char *) & s[i]);
		if (!i--)
			break ;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Wello World!";
// 	const char	*str2 = "Treslongtest";
// 	const char	*str3 = "Hi\0Hitest";
// 	const char	*str4 = "HiHitest";

// 	printf("ma ft   : %s\n", ft_strrchr(str, 'W'));
// 	printf("vrai ft : %s\n", strrchr(str, 'W'));
// 	printf("ma ft   : %s\n", ft_strrchr(str2, 'e'));
// 	printf("vrai ft : %s\n", strrchr(str2, 'e'));
// 	printf("ma ft   : %s\n", ft_strrchr(str3, '\0'));
// 	printf("vrai ft : %s\n", strrchr(str3, '\0'));
// 	printf("ma ft   : %s\n", ft_strrchr(str4, 'A'));
// 	printf("vrai ft : %s\n", strrchr(str4, 'A'));
// 	return (0);
// }
