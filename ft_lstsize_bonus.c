/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:23:40 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 10:21:20 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

// int main()
// {
// 	char *str = "imane";
// 	char *str1 = "ihaffout";
// 	char *str2 = "haffout";
// 	t_list *node = ft_lstnew(str);
// 	t_list *node1 = ft_lstnew(str1);
// 	t_list *node2 = ft_lstnew(str2);
// 	ft_lstadd_front(&node2 , node1);
// 	ft_lstadd_front(&node1 , node);

// 	printf("%d", ft_lstsize(node));
// }