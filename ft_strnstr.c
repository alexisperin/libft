/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:42:53 by aperin            #+#    #+#             */
/*   Updated: 2022/10/12 14:17:14 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *) haystack);
	i = 0;
	if (len < needle_len)
		return (0);
	while (haystack[i] && i <= (len - needle_len))
	{
		if (haystack[i] == needle[0])
		{
			if (!ft_strncmp(&haystack[i], needle, needle_len))
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}
