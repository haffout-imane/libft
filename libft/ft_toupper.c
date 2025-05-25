/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:20:34 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/09 16:47:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int  main()
{
	printf("%c\n", toupper('a' - 1));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('z' + 1));
	printf("%c\n", toupper('z'));
}*/