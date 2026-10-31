/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:00 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/29 15:48:03 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		signe;
	int		i;
	long	res;
	long	tmp;

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
		tmp = res;
		res = res * 10 + (nptr[i] - 48);
		if (tmp > res && signe == 1)
			return (-1);
		if (tmp > res && signe == -1)
			return (0);
		i++;
	}
	return ((int)(res * signe));
}
