/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:55:29 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:24 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	m;
	unsigned char	*p;
	size_t			i;

	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = m;
		i++;
	}
	return (s);
}
