/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:12:31 by aperin            #+#    #+#             */
/*   Updated: 2022/10/05 18:17:20 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_splits(const char *str, char c)
{
	int	i;
	int	size;

	if (!str)
		return (0);
	i = 0;
	size = 1;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			size++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (size);
}

static char	*get_substring(const char *str, char c)
{
	int		len;
	char	*substr;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, str, len + 1);
	return (substr);
}

static char	**free_splits(char **splits, int i)
{
	while (--i >= 0)
		free(splits[i]);
	free(splits);
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**splits;
	int		i;
	int		j;

	splits = malloc(size_splits(str, c) * sizeof(char *));
	if (!str || !splits)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			splits[j] = get_substring(&str[i], c);
			if (!splits[j])
				return (free_splits(splits, j));
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	splits[j] = 0;
	return (splits);
}
