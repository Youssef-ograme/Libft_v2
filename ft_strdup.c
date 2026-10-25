/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:48 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:37 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	ptr = malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = *(((char *)s) + i);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main ()
{
	char	str[] = "hello";
	char	*ptr;

	ptr = ft_strdup(NULL);
	printf("%s",ptr);
	free(ptr);
}
*/