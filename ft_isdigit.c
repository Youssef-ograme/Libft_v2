/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:14:39 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:24:45 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}
// #include <stdio.h>
// int main()
// {
//     printf ("%d",ft_isdigit(1));
//     printf ("%d",ft_isdigit('2'));
// }


int main ()
{
	int x = 4;
	int *nb = malloc (10);
	nb = &x;
}