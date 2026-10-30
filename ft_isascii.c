/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:38:20 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/20 16:18:39 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft    : %d\n", ft_isascii('\t'));
// 	printf("ma ft    : %d\n", ft_isascii('\0'));
// 	printf("ma ft    : %d\n", ft_isascii(126));
// 	printf("ma ft    : %d\n", ft_isascii(255)));
// 	return (0);
// }
