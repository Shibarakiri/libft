/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:11:53 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/20 16:19:27 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft    : %d\n", ft_isalpha('H'));
// 	printf("ma ft    : %d\n", ft_isalpha(32));
// 	printf("ma ft    : %d\n", ft_isalpha(126));
// 	printf("ma ft    : %d\n", ft_isalpha('a')));
// 	return (0);
// }
