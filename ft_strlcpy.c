/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:30:44 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/15 17:25:17 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include "libft.h"
#include <bsd/string.h> // Darori 3la Linux/WSL bach t-khdem strlcpy l-haqiqia
#include <stdio.h>
#include <string.h>

void	test_strlcpy(char *src, size_t size)
{
	char	dest1[50];
	char	dest2[50];
	size_t	ret1;
	size_t	ret2;

	// Kandiro memset b chi char b7al 'X' bach n-t2akkdo wach dest kat-etsffer wla kat-etsad f l-akher
	memset(dest1, 'X', 49);
	memset(dest2, 'X', 49);
	dest1[49] = '\0';
	dest2[49] = '\0';
	ret1 = strlcpy(dest1, src, size);
	ret2 = ft_strlcpy(dest2, src, size);
	printf("--- Test (src: \"%s\", size: %zu) ---\n", src, size);
	printf("Real -> ret: %zu | dest: \"%s\"\n", ret1, dest1);
	printf("Ft   -> ret: %zu | dest: \"%s\"\n", ret2, dest2);
	if (ret1 == ret2 && strcmp(dest1, dest2) == 0)
		printf("\033[32m[OK] Match 100%%\033[0m\n\n");
	else
		printf("\033[31m[KO] Mismatch!\033[0m\n\n");
}

int	main(void)
{
	// Case 1: Size kbir kfy (Normal copy)
	test_strlcpy("Hello 1337", 15);

	// Case 2: Size sgher mn src (Truncation test)
	test_strlcpy("Hello 1337", 6);

	// Case 3: Size = 0 (Ma khasch yg3ed walo f dest, w yrje3 l-length d src)
	test_strlcpy("Hello 1337", 0);

	// Case 4: Size = 1 (Ghir null terminator '\0' li khas yet7tt f dest)
	test_strlcpy("Hello 1337", 1);

	// Case 5: Source khawi ("")
	test_strlcpy("", 10);

	// Case 6: Buffer sgher bzaf w size sgher
	test_strlcpy("Bjr", 2);

	return (0);
}*/
