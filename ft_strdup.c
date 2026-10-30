/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:53:19 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/27 11:26:57 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	dest = malloc((ft_strlen(s) + 1) * sizeof(const char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*ma_ft;
// 	char	*vrai_ft;
//
// 	ma_ft = ft_strdup("");
// 	vrai_ft = strdup("");
// 	printf("ma ft   : %s\n", ma_ft);
// 	printf("vrai ft : %s\n", vrai_ft);
// 	free(ma_ft);
// 	free(vrai_ft);
// 	ma_ft = ft_strdup(" \tABC *&&*");
// 	vrai_ft = strdup(" \tABC *&&*");
// 	printf("ma ft   : %s\n", ma_ft);
// 	printf("vrai ft : %s\n", vrai_ft);
// 	free(ma_ft);
// 	free(vrai_ft);
// 	ma_ft = ft_strdup("Hi\0testhi");
// 	vrai_ft = strdup("Hi\0testhi");
// 	printf("ma ft   : %s\n", ma_ft);
// 	printf("vrai ft : %s\n", vrai_ft);
// 	free(ma_ft);
// 	free(vrai_ft);
// 	ma_ft = ft_strdup("\\\\\\abdu");
// 	vrai_ft = strdup("\\\\\\abdu");
// 	printf("ma ft   : %s\n", ma_ft);
// 	printf("vrai ft : %s\n", vrai_ft);
// 	free(ma_ft);
// 	free(vrai_ft);
// 	return (0);
// }
