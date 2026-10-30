/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:35:26 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/20 16:21:59 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ma ft    : %d\n", ft_isalnum('H'));
// 	printf("ma ft    : %d\n", ft_isalnum('0'));
// 	printf("ma ft    : %d\n", ft_isalnum(255));
// 	printf("ma ft    : %d\n", ft_isalnum('a')));
// 	return (0);
// }
