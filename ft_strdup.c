/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 08:30:43 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/17 16:37:30 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*dst;

	s_len = ft_strlen(s);
	dst = malloc(s_len + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s, s_len + 1);
	return (dst);
}
