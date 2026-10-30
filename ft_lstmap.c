/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:09:22 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 20:36:09 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*llist;
	t_list	*node;
	t_list	*temp;
	void	*content;

	if (!f || !del || !lst)
		return (NULL);
	llist = NULL;
	temp = lst;
	while (temp)
	{
		content = f(temp->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&llist, del);
			return (NULL);
		}
		ft_lstadd_back(&llist, node);
		temp = temp->next;
	}
	return (llist);
}

// # include <stdio.h>

// static void	*ft_toupper_str(void *content)
// {
// 	char	*str;
// 	size_t	i;

// 	str = ft_strdup(content);
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper((unsigned char)str[i]);
// 		i++;
// 	}
// 	return (str);
// }

// int	main(void)
// {
// 	t_list	*head = ft_lstnew(ft_strdup("Hello "));
// 	t_list	*node1 = ft_lstnew(ft_strdup("World "));
// 	t_list	*node2 = ft_lstnew(ft_strdup("!\n"));
// 	t_list	*result;

// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;
// 	result = ft_lstmap(head, ft_toupper_str, free);
// 	while (result)
// 	{
// 		printf("%s", (char *)result->content);
// 		result = result->next;
// 	}
// 	ft_lstclear(&head, free);
// 	ft_lstclear(&result, free);
// 	return (0);
// }
