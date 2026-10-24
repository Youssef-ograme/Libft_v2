/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:00 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/19 17:03:53 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signe;
	int	i;
	int	res;

	signe = 1;
	i = 0;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		signe *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * signe);
}

/*
#include <stdlib.h>

int	main(void)
{
	int	nb;
	int	nb2;

	nb = ft_atoi("-9223372036854775808");
	nb2 = atoi("-9223372036854775808");
	printf("ft_atoi :%d\n", nb);
	printf("atoi : %d", nb2);
}
*/
