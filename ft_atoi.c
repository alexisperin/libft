/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:41:35 by aperin            #+#    #+#             */
/*   Updated: 2022/10/12 11:54:57 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	spaces_and_sign(const char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	nbr;
	int		i;
	int		nbr_len;

	nbr = 0;
	nbr_len = 0;
	i = spaces_and_sign(str, &sign);
	while (ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
		nbr_len++;
	}
	if ((nbr > LLONG_MAX || nbr_len > 19) && sign == 1)
		return (-1);
	if ((nbr - 1 > LLONG_MAX || nbr_len > 19) && sign == -1)
		return (0);
	return (sign * nbr);
}
