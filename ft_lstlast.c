/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:39:48 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 17:08:44 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
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
// 	printf("Head      : %s\n", (char *) ft_lstlast(first)->content);
// 	printf("2nd node  : %s\n", (char *) ft_lstlast(second)->content);
// 	printf("3rd node  : %s\n", (char *) ft_lstlast(third)->content);
// 	free(first);
// 	free(second);
// 	free(third);
// 	return (0);
// }
