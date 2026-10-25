/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:11 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:56 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_string(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

static size_t	len_string(const char *s1, const char *set)
{
	size_t	j;
	size_t	i;

	j = ft_strlen(s1);
	i = 0;
	while (i < j && test_string(s1[i], set))
		i++;
	while (j > i && test_string(s1[j - 1], set))
		j--;
	return (j - i);
}

static char	*check_ptr(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	start = 0;
	if (len_string(s1, set) <= 0)
		return (check_ptr());
	ptr = malloc(len_string(s1, set) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] && test_string(s1[i++], set))
		start++;
	i = end - 1;
	while (s1[i] && test_string(s1[i--], set))
		end--;
	i = 0;
	while (start < end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	char str[] = "\0";
	char set[] = "xl ";
	// size_t len = len_string(str ,set);
	char *res = ft_strtrim(str, set);
	printf("res :%s", res); // res:
}*/
