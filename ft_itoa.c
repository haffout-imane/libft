/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:34:41 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 14:13:45 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		c;
	char	*str;

	c = ft_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(c + 1);
	if (!str)
		return (NULL);
	str[c] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[--c] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
// int main()
// {
// 	printf("%s\n", ft_itoa(12345678867890));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-1234567890));
// }