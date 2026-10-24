/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:54 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/23 14:04:27 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	if (!dst || !src)
		return (0);
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dest + i + 1) < size)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*
#include <stdio.h>
int	main(void)
{
	char src[] = "brother";
	char dest[10] = "hello";
	int res = ft_strlcat(dest, src, 8);
	printf("%s , %d", dest, res);
}
*/