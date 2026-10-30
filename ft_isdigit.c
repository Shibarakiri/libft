/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:31:46 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/20 16:15:18 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft    : %d\n", ft_isdigit(126));
// 	printf("ma ft    : %d\n", ft_isdigit('a'));
// 	printf("ma ft    : %d\n", ft_isdigit('9'));
// 	printf("ma ft    : %d\n", ft_isdigit(32));
// 	return (0);
// }
