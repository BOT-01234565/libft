/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:57:10 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/25 18:20:07 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new_list;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	cur = lst;
	head = NULL;
	while (cur)
	{
		new_list = ft_lstnew(f(cur->content));
		if (!new_list)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_list);
		cur = cur->next;
	}
	return (head);
}
