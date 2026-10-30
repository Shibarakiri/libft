/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:10:18 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/29 15:27:47 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (!*little)
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (j < len - i && big[i + j] && little[j]
				&& big[i + j] == little[j])
		j++;
		if (little[j] == '\0')
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;
// 	char	*result;

// 	test1 = "Tres long tEst";
// 	test2 = "Treslongtest";
// 	test3 = "Hi\0Hi";
// 	test4 = "Hello World";
// 	printf("ma ft   : %s\n", ft_strnstr(test1, "long", 9));
// 	printf("ma ft   : %s\n", ft_strnstr(test2, "test", 12));
// 	printf("ma ft   : %s\n", ft_strnstr(test3, "Hi", 5));
// 	printf("ma ft   : %s\n", ft_strnstr(test4, NULL, 11));
// 	return (0);
// }
