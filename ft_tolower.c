/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:03:31 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/21 15:04:19 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int    main(void)
// {
//     printf("ma ft   : %c\n", ft_tolower('A'));
//     printf("vrai ft : %c\n", tolower('A'));
//     printf("ma ft   : %c\n", ft_tolower('z'));
//     printf("vrai ft : %c\n", tolower('z'));
//     printf("ma ft   : %c\n", ft_tolower('1'));
//     printf("vrai ft : %c\n", tolower('1'));
//     return (0);
// }
