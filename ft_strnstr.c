/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:07 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:51 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		k = 0;
		while (i + k < len && big[i + k] && little[k] && big[i
				+ k] == little[k])
			k++;
		if (little[k] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int main ()
// {
//     char big[] = "hello brother";
//     char little[] = "lo bro";
//     char *res = ft_strnstr(big , little , 3);
//     printf ("%s",res);
// }
// const char *ptr;//true
// const char const *ptr;//err
// const char *const ptr;//sir 9alb
// char const *ptr;//sir sir 9alb
// char *const ptr;//sir 9alb
