/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:15:59 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 10:11:11 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_imane(void *content)
// {
// 	printf("%s\n", content);
// }
//
// int main ()
// {
//     char s1[] = "imane";
//     char s2[] = "nada";
//     char s3[] = "mounia";
//     char s4[] = "haffout";

//     t_list *node1 = ft_lstnew(s1);
//     t_list *node2 = ft_lstnew(s2);
//     t_list *node3 = ft_lstnew(s3);
//     t_list *node4 = ft_lstnew(s4);

//     ft_lstadd_back(&node1 , node2);
//     ft_lstadd_back(&node2 , node3);
//     ft_lstadd_back(&node3 , node4);

// 	ft_lstiter(node1, ft_imane);
// }