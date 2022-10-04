/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:08:56 by aperin            #+#    #+#             */
/*   Updated: 2022/10/04 16:42:16 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			substr_len;
	char			*substr;

	if (ft_strlen(s) < start + 1)
		return (ft_strdup(""));
	substr_len = ft_strlen(s + start);
	if (substr_len > len)
		substr_len = len;
	substr = malloc((substr_len + 1) * sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, substr_len + 1);
	return (substr);
}
