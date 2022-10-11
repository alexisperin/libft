/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:46 by aperin            #+#    #+#             */
/*   Updated: 2022/10/11 16:26:15 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	if (!dest && !src)
		return (0);
	ptr_dest = (char *) dest;
	ptr_src = (const char *) src;
	while (n)
	{
		ptr_dest[n - 1] = ptr_src[n - 1];
		n--;
	}
	return (dest);
}
