/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:16:55 by aperin            #+#    #+#             */
/*   Updated: 2022/10/04 21:16:55 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] && c != set[i])
		i++;
	if (set[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;

	if(!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (in_set(s1[start], set))
		start++;
	while (in_set(s1[end], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	trim = malloc((end - start + 2) * sizeof(char));
	if (!trim)
		return (0);
	ft_strlcpy(trim, &s1[start], end - start + 2);
	return (trim);
}
