/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:45:15 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/18 13:56:46 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	if (p1 == p2 || n == 0)
		return (s1);
	if (p1 > p2)
	{
		while (n--)
			p1[n] = p2[n];
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
