/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:55:30 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/21 15:03:11 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("ma ft   : %c\n", ft_toupper('a'));
// 	printf("vrai ft : %c\n", toupper('a'));
// 	printf("ma ft   : %c\n", ft_toupper('Z'));
// 	printf("vrai ft : %c\n", toupper('Z'));
// 	printf("ma ft   : %c\n", ft_toupper('1'));
// 	printf("vrai ft : %c\n", toupper('1'));
// 	return (0);
// }
