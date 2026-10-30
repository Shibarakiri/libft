/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:32:41 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 17:19:36 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = ft_lstnew(ft_strdup("Tout pareil"));
// 	t_list	*node1 = ft_lstnew(ft_strdup("Tout "));
// 	t_list	*node2 = ft_lstnew(ft_strdup("pareil"));

// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;
// 	ft_lstclear(&head, free);
// 	if (head == NULL)
// 		printf("Pass\n");
// 	return (0);
// }
