/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:52 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/23 12:10:53 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*ptr;
// 	size_t	i;
// 	size_t	j;
// 	size_t	k;
	
// 	if (!s1 || !s2)
// 		return NULL;
// 	k = 0;
// 	j = 0;
// 	i = 0;
// 	ptr = malloc((ft_strlen(s2) + ft_strlen(s1)) + 1);
// 	if (!ptr)
// 		return (NULL);
// 	while (k < (ft_strlen(s2) + ft_strlen(s1)))
// 	{
// 		if (s1[i] != '\0')
// 			ptr[k] = s1[i++];
// 		else if (s2[j] != '\0')
// 			ptr[k] = s2[j++];
// 		k++;
// 	}
// 	ptr[k] = '\0';
// 	return (ptr);
// }

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    size_t  i;
    size_t  j;

    if (!s1 || !s2)
        return (NULL);
    ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        ptr[i + j] = s2[j];
        j++;
    }
    ptr[i + j] = '\0';
    return (ptr);
}

/*#include <stdio.h>
int main ()
{
    char str1[] = "hello ";
    char str2[] = "brotherfheksdjhkjdfjcfd";
    char *str = ft_strjoin(str1, str2);
    printf ("%s",str);
}*/