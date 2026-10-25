/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelbouz <amelbouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:54:17 by amelbouz          #+#    #+#             */
/*   Updated: 2026/10/18 10:12:52 by amelbouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	main()
{
	char const *s = "ababaaaMy name is Simonbbaaabba";
	char const *set = "ab";
	printf("%s\n",(char *)ft_strtrim(s,set));
}
