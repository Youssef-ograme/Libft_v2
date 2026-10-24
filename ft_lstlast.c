/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoograme <yoograme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:59:01 by yoograme          #+#    #+#             */
/*   Updated: 2026/10/21 17:01:24 by yoograme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// void	printf_list(t_list *node)
// {
// 	if (!node)
// 		return ;
// 	printf("%d\n", *(int *)node->content);
// 	printf_list(node->next);
// }

// void	free_list(t_list *head)
// {
// 	if (!head)
// 		return ;
// 	free_list(head->next);
// 	free(head);
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

// 	t_list *res = ft_lstlast(head);
// 	printf_list(res);
// 	free_list(head);
// }