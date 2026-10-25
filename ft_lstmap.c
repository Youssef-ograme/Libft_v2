/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:58:58 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:04 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new;
	void	*content;

	new_head = NULL;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new);
		lst = lst->next;
	}
	return (new_head);
}

// void	*f(void *content)
// {
// 	int	*res;
// 	int	nb;

// 	res = malloc(sizeof(int));
// 	if (!res)
// 		return (NULL);
// 	nb = *(int *)content;
// 	*res = nb * 1;
// 	return (res);
// }

// void	del(void *content)
// {
// 	(void)content;
// }

// void	printf_list(t_list *node)
// {
// 	if (!node)
// 		return ;
// 	printf("%d\n", *(int *)node->content);
// 	printf_list(node->next);
// }

// int	main(void)
// {
// 	int nb1 = 10;
// 	int nb2 = 20;
// 	int nb3 = 30;
// 	int nb4 = 40;
// 	int nb5 = 50;
// 	int nb6 = 60;
// 	int nb7 = 70;
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(&nb1);
// 	t_list *node2 = ft_lstnew(&nb2);
// 	t_list *node3 = ft_lstnew(&nb3);
// 	t_list *node4 = ft_lstnew(&nb4);
// 	t_list *node5 = ft_lstnew(&nb5);
// 	t_list *node6 = ft_lstnew(&nb6);
// 	t_list *node7 = ft_lstnew(&nb7);
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = node5;
// 	node5->next = node6;
// 	node6->next = node7;
// 	node7->next = NULL;
// 	head = node1;
// 	//--
// 	t_list *res = ft_lstmap(head, &f, &del);
// 	printf_list(res);
// }