/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:08:47 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 02:47:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
// int main()
// {
// 	printf("%d\n", ft_isalnum(54));
// 	printf("%d\n", ft_isalnum(33));
// 	printf("%d\n", ft_isalnum(93));
// 	printf("%d\n", ft_isalnum(0));
// }