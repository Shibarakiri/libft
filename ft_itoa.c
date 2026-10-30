/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:20:57 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 18:39:43 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenn(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	str = malloc((lenn(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nb = n;
	i = lenn(n);
	str[i] = '\0';
	if (nb < 0)
		nb = -nb;
	while (i > 0)
	{
		str[--i] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft   : %s\n", ft_itoa(1));
// 	printf("ma ft   : %s\n", ft_itoa(-12345));
// 	printf("ma ft   : %s\n", ft_itoa(0));
// 	printf("ma ft   : %s\n", ft_itoa(2147483647));
// 	printf("ma ft   : %s\n", ft_itoa(-2147483648));
// 	return (0);
// }
