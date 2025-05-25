/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:54:40 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 14:11:21 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
//     char src[25] = "imane";
//     char src1[25] = "imane";
//     ft_memcpy(src + 2, src, 3);
//     printf("After my memcpy: %s\n", src);
//     memcpy(src1 + 2, src1, 3);
//     printf("After the libc memcpy: %s\n", src1);
// }