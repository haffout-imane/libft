/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:33:15 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 05:48:42 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void ft_del(void *content)
// {
//     free(content);
// }
// int main ()
// {
//     char *s1 = ft_strdup("imane");
//     char *s2 = ft_strdup("nada");
//     char *s3 = ft_strdup("mounia");
//     char *s4 = ft_strdup("haffout");

//     t_list *node1 = ft_lstnew(s1);
//     printf("%p\n", node1 -> content);
//     t_list *node2 = ft_lstnew(s2);
//     t_list *node3 = ft_lstnew(s3);
//     t_list *node4 = ft_lstnew(s4);

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstadd_back(&node1, node4);

// 	ft_lstclear(&node1, ft_del);
//     printf("%p", node1);
// }