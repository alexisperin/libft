/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:12:39 by aperin            #+#    #+#             */
/*   Updated: 2022/10/04 12:57:46 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uc;

	if (!s || !n)
		return (0);
	i = 0;
	str = (unsigned char *) s;
	uc = (unsigned char) c;
	while (str[i] != uc && i < n)
		i++;
	if (str[i] == uc)
		return (str + i);
	return (0);
}
