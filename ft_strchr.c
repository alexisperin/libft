/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:40:59 by aperin            #+#    #+#             */
/*   Updated: 2022/10/05 15:47:28 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	if (!s)
		return (0);
	str = (char *) s;
	i = 0;
	while (str[i] && str[i] != (char) c)
		i++;
	if (str[i] == (char) c)
		return (str + i);
	return (0);
}
