/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:58:58 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/29 15:27:15 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;
	t_list	*trav;
	void	*data;

	if (!f || !del)
		return (NULL);
	new_head = NULL;
	trav = lst;
	while (trav)
	{
		data = f(trav->content);
		new_node = ft_lstnew(data);
		if (!new_node)
		{
			del(data);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		trav = trav->next;
	}
	return (new_head);
}
