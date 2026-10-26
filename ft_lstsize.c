/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:44:05 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/25 16:53:22 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*cur;

	count = 0;
	cur = lst;
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	return (count);
}
