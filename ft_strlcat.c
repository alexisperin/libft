/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:45:07 by aperin            #+#    #+#             */
/*   Updated: 2022/10/05 15:47:39 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	if (!src)
		return (dst_size);
	if (!dst || size < 1)
		return (ft_strlen(src));
	if (size < dst_size)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && (dst_size + i) < (size - 1))
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = 0;
	return (dst_size + ft_strlen(src));
}
