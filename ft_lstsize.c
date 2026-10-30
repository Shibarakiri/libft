/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:14:24 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 16:58:01 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	if (!lst)
		return (0);
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*first = ft_lstnew("Hello ");
// 	t_list	*second = ft_lstnew("Word");
// 	t_list	*third = ft_lstnew(" !");

// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	printf("Head      : %d\n", ft_lstsize(first));
// 	printf("2nd node  : %d\n", ft_lstsize(second));
// 	printf("3rd node  : %d\n", ft_lstsize(third));
// 	free(first);
// 	free(second);
// 	free(third);
// 	return (0);
// }
