/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:54:53 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/19 11:10:40 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (!little[0] || len == 0)
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && len >= little_len + i)
	{
		if (big[i] == little[0])
			if (ft_strncmp(&big[i], little, little_len) == 0)
				return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
