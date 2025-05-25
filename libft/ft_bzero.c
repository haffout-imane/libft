/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:10:51 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/23 01:30:45 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
// int main()
// {
// 	int i = 0;
// 	int arr[5] = {1,2,3,4,5};
// 	ft_bzero(arr, 5 * sizeof(int));
// 	while(i < 5)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }