/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:06:37 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/12 16:48:16 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else if (dst <= src)
		ft_memcpy(dst, src, len);
	return (dst);
}

// int    main(void)
// {
//     char dest[20] = "imane";
//     char src[20] = "haffout";
//     //printf("%s\n", memmove(dest,src,6));
//     printf("%s\n", memmove(dest,src,6));
// }