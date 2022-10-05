/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:00:11 by aperin            #+#    #+#             */
/*   Updated: 2022/10/05 15:47:32 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dup;

	len = (int) ft_strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	ft_strlcpy(dup, str, len + 1);
	return (dup);
}
