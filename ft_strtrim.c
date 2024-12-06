/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:17:06 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 10:44:20 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = malloc((end - start) + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, (end - start) + 1);
	return (result);
}
// int main ()
// {
//     char *s1 = "ellohh";
//     char *set = "hh";
//     printf("%s\n", ft_strtrim(s1, set));
// }