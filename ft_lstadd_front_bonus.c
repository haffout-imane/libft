/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:02:11 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 03:18:02 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main ()
// {
// 	char *str = "imane";
// 	t_list *ptr = NULL;
// 	t_list *node = ft_lstnew(str);
// 	ft_lstadd_front(&ptr , node);
// 	printf("%s\n", node -> content);
// 	printf("%p\n", node -> next);
// 	printf("%p\n", ptr);
// }