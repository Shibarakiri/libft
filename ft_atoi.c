/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:54:19 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/27 11:26:30 by jeguiber         ###   ########.fr       */
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
// #include <stdlib.h>

// int	main(void)
// {
// 	char	test1[] = "   -42abc";
// 	char	test2[] = "INT_MAX";
// 	char	test3bizarre[] = "-214748399649";
// 	char	test4[] = " \n\t\t -9999999999999999999999999999";
// 	char	test5[] = " \n+30948ab99";
// 	char	test6[] = " \n\t\t --+9990&&99";

// 	printf("ma ft   : %d\n", ft_atoi(test1));
// 	printf("vrai ft : %d\n", atoi(test1));
// 	printf("ma ft   : %d\n", ft_atoi(test2));
// 	printf("vrai ft : %d\n", atoi(test2));
// 	printf("ma ft   : %d\n", ft_atoi(test3bizarre));
// 	printf("vrai ft : %d\n", atoi(test3bizarre));
// 	printf("ma ft   : %d\n", ft_atoi(test4));
// 	printf("vrai ft : %d\n", atoi(test4));
// 	printf("ma ft   : %d\n", ft_atoi(test5));
// 	printf("vrai ft : %d\n", atoi(test5));
// 	printf("ma ft   : %d\n", ft_atoi(test6));
// 	printf("vrai ft : %d\n", atoi(test6));
// 	return (0);
// }
