/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:45 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 03:43:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		node = ft_lstlast(*lst);
		node->next = new;
	}
	else
		*lst = new;
}
// int main()
// {
// 	char *str = "imane";
// 	t_list *ptr = NULL;
// 	t_list *node = ft_lstnew(str);
// 	ft_lstadd_back(&ptr, node);
// 	printf("%s\n", node -> content);
// 	printf("%p\n", node -> next);
// 	printf("%p\n", ptr);
// }
