/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:02:19 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 10:42:04 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void imane(unsigned int i, char *p)
{
	if(*p >= 'a' && *p <= 'z')
		*p -= 32;
}
int	main(void)
{
	char str[] = "Hello, World!";

	printf("Before: %s\n", str);
	ft_striteri(str, imane);
	printf("After: %s\n", str);

	return (0);
} */