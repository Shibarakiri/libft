/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:41:41 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/26 14:52:32 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// int main(void)
// {
//     ft_putstr_fd("Hello, World!", 1);
//     ft_putstr_fd("This is a test.", 1);
//     ft_putstr_fd("", 1);
//     return (0);
// }
