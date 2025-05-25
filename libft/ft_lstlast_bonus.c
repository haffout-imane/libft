/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:58:45 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 04:55:32 by ihaffout         ###   ########.fr       */
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
// int main ()
// {
// 	char *str = "imane";
// 	char *str1 = "ihaffout";
// 	char *str2 = "haffout";
// 	t_list *node = ft_lstnew(str);
// 	t_list *node1 = ft_lstnew(str1);
// 	t_list *node2 = ft_lstnew(str2);
// 	ft_lstadd_front(&node2 , node1);
// 	ft_lstadd_front(&node1 , node);

// 		printf("%s" , ft_lstlast(node) -> content);
// }