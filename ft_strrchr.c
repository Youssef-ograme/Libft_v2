/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:09 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:53 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	while (n >= 0)
	{
		if (((const unsigned char *)s)[n] == (unsigned char)c)
			return ((char *)&s[n]);
		n--;
	}
	return (NULL);
}

// int main ()
// {
//     char str[] = "helljdkjweljo";
//     char *res = ft_strrchr(str,'#');
//     printf("%s",res);
// }