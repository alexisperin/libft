/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:12:39 by aperin            #+#    #+#             */
/*   Updated: 2022/10/11 17:19:30 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uc;

	i = 0;
	str = (unsigned char *) s;
	uc = (unsigned char) c;
	while (str[i] && i < n)
	{
		if (str[i] == uc)
			return (str + i);
		i ++;
	}
	if (uc == '\0')
		return (str + i);
	return (0);
}
