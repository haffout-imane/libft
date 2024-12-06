/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:13:04 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 10:20:48 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*result;
	void	*ptr;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	ptr = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		node = ft_lstnew(ptr);
		if (!node)
		{
			del(ptr);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
// void ft_del(void * content)
// {
// 	free(content);
// }
// void *ft_print(void *content)
// {
// 	printf("%s\n", content);
// 	return(0);
// }
// int main ()
// {
//     char s1[] = "imane";
//     char s2[] = "nada";
//     char s3[] = "m6ounia";
//     char s4[] = "haffou9t";

//     t_list *node1 = ft_lstnew(s1);
//     t_list *node2 = ft_lstnew(s2);
//     t_list *node3 = ft_lstnew(s3);
//     t_list *node4 = ft_lstnew(s4);

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstadd_back(&node1, node4);

// 	ft_lstmap(node1, ft_print, ft_del);

// }