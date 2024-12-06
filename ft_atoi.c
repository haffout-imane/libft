/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:29:43 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 12:45:16 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > LLONG_MAX && sign == 1)
		return (-1);
	else if (result > LLONG_MAX && sign == -1)
		return (0);
	return (result * sign);
}
// int main ()
// {
// printf("%d\n", ft_atoi(NULL));
// 	printf("%d\n", ft_atoi("1234imane"));
// 	printf("%d\n", ft_atoi("--123imane"));
// 	printf("%d\n", ft_atoi("-+123imane"));
// 	printf("%d\n", ft_atoi("+123imane"));
// 	printf("%d\n", ft_atoi("-123imane"));
// 	printf("%d\n", ft_atoi("   -1234imane"));
// 	printf("%d\n", ft_atoi("   	+1234imane"));
// 	printf("%d\n", ft_atoi("12gf34imane"));
// 	printf("%d\n", ft_atoi("12345678901234567890"));
// 	printf("%d\n", ft_atoi("-12345678901234567890"));
// 	printf("XD <3");
// }