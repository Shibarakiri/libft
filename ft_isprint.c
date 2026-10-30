/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:43:18 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/22 11:38:45 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft    : %d\n", ft_isprint(126));
// 	printf("ma ft    : %d\n", ft_isprint(6));
// 	printf("ma ft    : %d\n", ft_isprint(0));
// 	printf("ma ft    : %d\n", ft_isprint(255));
// 	return (0);
// }
