/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:46 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:49 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	const unsigned char	*s1;
	unsigned char	c1;

	if (!s)
		return NULL;
	i = 0;
	s1 = (const unsigned char *)s;
	c1 = (unsigned char )c;
	while (s1[i])
	{
		if (s1[i] == c1)
			return ((char *)&s1[i]);
		i++;
	}
	if (s1[i] == c1)
        return ((char *)&s1[i]);
	return (NULL);
}

// #include <stdio.h>
// int main ()
// {
//     char str[] = "hello";
//     char *res = ft_strchr(NULL, 'é');
//     printf("%s",res);
// }