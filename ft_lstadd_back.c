/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguiber <jeguiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:09:22 by jeguiber          #+#    #+#             */
/*   Updated: 2026/10/28 20:28:07 by jeguiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*first = ft_lstnew("Hello ");
// 	t_list	*second = ft_lstnew("Word");
// 	t_list	*third = ft_lstnew(" !");
// 	t_list	*new = ft_lstnew("the last node, should be");

// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	ft_lstadd_back(&first, new);
// 	printf("NextHead    : %s\n", (char *) first->next->content);
// 	printf("Next2ndnode : %s\n", (char *) second->next->content);
// 	printf("New         : %s\n", (char *) third->next->content);
// 	free(first);
// 	free(second);
// 	free(third);
// 	free(new);
// 	return (0);
// }
