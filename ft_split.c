/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:44 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/24 09:52:39 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_word_dup(const char *s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free_tab(char **tab, size_t j)
{
	while (j > 0)
		free(tab[--j]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words_count;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	words_count = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words_count)
	{
		while (s[i] && s[i] == c)
			i++;
		result[j] = ft_word_dup(&s[i], c);
		if (!result[j])
			return (ft_free_tab(result, j));
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
// int main ()
// {
//     char str[] = "hello brother man";
//     char **res = ft_split(str , ' ');
//     int i = 0;
//     while (res[i])
//         printf("%s\n",res[i++]);
//     i = 0;
//     while (res[i])
//         free(res[i++]);
//     free (res);
// }


/*
#include "libft.h"

// "hello brother man"
static size_t	ft_strlen_2(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_strdup_2(const char *s, char c)
{
	int		i;
	char	*ptr;

	ptr = malloc(ft_strlen_2(s, c) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	len_world(const char *str, char c)
{
	int	i;
	int	count;
	int	new_world;
	
	if (!str)
        return (0);
	new_world = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && new_world)
		{
			count++;
			new_world = 0;
		}
		else if (str[i] == c)
			new_world = 1;
		i++;
	}
	return (count);
}

static void	free_(char **stack, int k)
{
	while (k > 0)
		free(stack[--k]);
	free(stack);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	char	**stack;
	int		i;

	if (!s)
        return (NULL);
	i = 0;
	k = 0;
	stack = malloc((len_world(s, c) + 1) * sizeof(char *));
	if (!stack)
		return (NULL);
	while (s[i])
	{
		while (s[i ]&& s[i] == c)
			i++;
		stack[k] = ft_strdup_2(&s[i], c);
		if (!stack[k++])
		{
			free_(stack, k - 1);
			return (NULL);
		}
		i += ft_strlen_2(&s[i], c);
	}
	stack[k] = NULL;
	return (stack);
}

*/