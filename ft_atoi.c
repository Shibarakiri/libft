/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:54:19 by jeguiber          #+#    #+#             */
/*   Updated: 2026/11/03 11:11:21 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (sign * result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "   -42abc";
// 	char	test2[] = "2147483647";
// 	char	test3[] = "-2147483996999949";
// 	char	test4[] = " \n+30948ab99";
// 	char	test5[] = " \n\t\t --+9990&&99";

// 	printf("ma ft   : %d\n", ft_atoi(test1));
// 	printf("vrai ft : %d\n", atoi(test1));
// 	printf("ma ft   : %d\n", ft_atoi(test2));
// 	printf("vrai ft : %d\n", atoi(test2));
// 	printf("ma ft   : %d\n", ft_atoi(test3));
// 	printf("vrai ft : %d\n", atoi(test3));
// 	printf("ma ft   : %d\n", ft_atoi(test4));
// 	printf("vrai ft : %d\n", atoi(test4));
// 	printf("ma ft   : %d\n", ft_atoi(test5));
// 	printf("vrai ft : %d\n", atoi(test5));
// 	return (0);
// }
