/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:04 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:49 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//    $ ./string_comp ABC ABC
//        <str1> and <str2> are equal
//        $ ./string_comp ABC AB      # 'C' is ASCII 67; 'C' - ' ' = 67
//        <str1> is greater than <str2> (67)
//        $ ./string_comp ABA ABZ     # 'A' is ASCII 65; 'Z' is ASCII 90
//        <str1> is less than <str2> (-25)
//        $ ./string_comp ABJ ABC
//        <str1> is greater than <str2> (7)
//        $ ./string_comp $'\201' A   # 0201 - 0101 = 0100 (or 64 decimal)
//        <str1> is greater than <str2> (64)

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main ()
// {
//     char s1[] = "ABA";
//     char s2[] = "ABZ";
//     int res = ft_strncmp(s1 , s2,1);
//     printf("%d",res);
// }

//"hello\0jhfh"
