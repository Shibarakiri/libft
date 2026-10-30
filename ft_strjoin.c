/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:28:03 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/27 11:27:00 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc((len) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	ft_strlcat(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*result;
//
// 	result = ft_strjoin("", "");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strjoin("", "Hell0WorlD\\");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strjoin("Hitesthi", "");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	result = ft_strjoin("\\\\U\\\\w \0  \t  JSIOJ", "HI");
// 	printf("ma ft   : %s\n", result);
// 	free(result);
// 	return (0);
// }
