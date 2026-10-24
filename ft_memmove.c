/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:48:27 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/24 10:26:32 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (src == dest || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (s > d)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
// void test (char *str1)
// {
//     printf("%c",str1[0]);
// }

// int	main(void)
// {
// 	char str[] = "hello";
// 	char src[] = "bro";
// 	ft_memmove(str, str, 3);
// 	printf("%s", str);
// 	return (0);
// }
