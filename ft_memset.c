/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:55:29 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/24 10:52:52 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// int	main(void)
// {
// 	int				x;
// 	unsigned char	*s;

// 	x = 0;
// 	s = (unsigned char *)&x;
// 	ft_memset(&s[0], 300, 1);
// 	printf("After first memset: x = %d\n", x);
// 	ft_memset(&s[1], 1, 1);
// 	printf("After second memset: x = %d\n", x);
// 	return (0);
// }

// int	main(void)
// {
// 	int				x;
// 	unsigned char	*s;
// 	int				index;

// 	// int tab[10] = {0,1,2,3,4,5,6,7,8,9};
// 	x = 100;
// 	s = (unsigned char *)&x;
// 	// while (index < sizeof(int))
// 	// {
// 	//     printf("%d\n", s[index]);
// 	//     index++;
// 	// }
// 	ft_memset(&s[0],57, 1);
// 	ft_memset(&s[1],5, 1);
// 	printf("x == %d\n", x);
// 	// printf("%s\n", *(&s));
// 	// printf("%s\n", *(&s  + 1));
// 	return (4);
// 	// void *s = (char *)&x;
// 	// 00000000 00000000 00000000
// 	// 1337 = 00000000 00000000 00000101 00111001
// 	// printf("%d\n", *(int *)ft_memset(&s, 57 ,1));
// 	// printf("%d\n", *(int *)ft_memset(&s, 5, 1));
// 	// printf("%d\n", *(&x + 0));
// 	// int *res = ft_memset(tab,2,4 * sizeof(int));
// 	// printf("%d", x);
// 	// while (i < 10)
// 	//     printf("%d\n",res[i++]);
// 	// printf("%s",res);
// }
// // 00000000 00000000 00010000 10010010
// // 1 2 4 8 16 32 64 128 ||  256 512 1024 2048 4096 8192 16384 32768

// // 5 * 1 || 5 * 256
// //
// // */

// // 00000000 00101010
