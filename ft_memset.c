/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:15:13 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/11 16:43:44 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int    main(void)
// {
//     // int s[10];
// 	// ft_memset(s, 'x', 0);
//     // for (int i = 0; i < 6; i++)
//     //     printf("%d", s[i]);
// 	// int		*s = (int *)malloc(sizeof(int));
// 	// memset(&s, 45, 1);
// 	// printf("%c", s);
// 	// memset(&s, 49, 1);
// 	// printf("%c", s);
// 	// memset(&s, 51, 1);
// 	// printf("%c", s);
// 	// memset(&s, 51, 1);
// 	// printf("%c", s);
// 	// memset(&s, 55, 1);
//  	// printf("%c", s);
//  	// return (0);

// 	int s;
// 	ft_memset(&s, -1, 4);//0b11111111
//     ft_memset(&s, -1, 3);//0b11111111
//     ft_memset(&s, 250, 2);//0b11111010
//     ft_memset(&s, 199, 1);//0b11000111
//     printf("%d", s);
//     return (0);
// }