/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:00:05 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/26 08:27:10 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	res_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*res;

	nb = n;
	len = res_len(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	res[0] = '0';
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	while (--len >= 0 && nb > 0)
	{
		res[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
}*/
