/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:06:00 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 05:44:17 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void ft_del(void *content)
// {
// 	free(content);
// }
//
// int main()
// {
//     char *s1 =strdup("imane");
//     char *s2 =strdup("iman");
//     char *s3 =strdup("ima");
//     char *s4 =strdup("im");

//     t_list *node1 = ft_lstnew(s1);
//     t_list *node2 = ft_lstnew(s2);
//     t_list *node3 = ft_lstnew(s3);
//     t_list *node4 = ft_lstnew(s4);

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstadd_back(&node1, node4);

// 	ft_lstdelone(node3, ft_del);
// 	printf("%s\n", node3 -> content);
// }