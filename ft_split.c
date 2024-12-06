/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 02:37:09 by ihaffout          #+#    #+#             */
/*   Updated: 2023/12/24 14:14:05 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*allocation(char *s, char c, int index)
{
	int		j;
	int		count;
	char	*result;

	j = index;
	count = 0;
	while (s[j] != c && s[j])
	{
		j++;
		count++;
	}
	result = ft_substr(s, index, count);
	return (result);
}

static void	*ft_clear(char **str, int j)
{
	while (j > 0)
	{
		j--;
		free(str[j]);
	}
	free(str);
	return (NULL);
}

static char	**ft_result(char const *s, char c, char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = allocation((char *)s, c, i);
			if (!str[j])
				return (ft_clear(str, j));
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_count((char *)s, c) + 1));
	if (!str)
		return (NULL);
	str = ft_result(s, c, str);
	return (str);
}

/* int main()
{
	char *str = ",,imane,,haffout,";
	char **result = ft_split(str, ',');
	int i = 0;
	while (i < 3)

	{
		printf("%s\n", result[i]);
		i++;
	}
} */