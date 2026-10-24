/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:21 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/19 17:07:32 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nb;

	nb = n;
	len = count_n(n);
	if (nb == 0)
		return (ft_strdup("0"));
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	ptr[len--] = '\0';
	while (nb > 0)
	{
		ptr[len--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ptr);
}
/*
int	main(void)
{
	char *res = ft_itoa(0);
	printf("%s", res);
	free(res);
}*/
