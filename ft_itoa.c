/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:53:19 by aperin            #+#    #+#             */
/*   Updated: 2022/10/05 10:53:19 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoa_len(long nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

void	ft_itoa_recursive(long nbr, char *str, int index)
{
	if (nbr > 9)
		ft_itoa_recursive(nbr / 10, str, index - 1);
	str[index] = (nbr % 10) + 48;
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		i;
	int		len;

	nbr = (long) n;
	len = ft_itoa_len(nbr);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = 0;
	i = 0;
	if (nbr < 0)
	{
		str[i] = '-';
		nbr = - nbr;
		i++;
	}
	ft_itoa_recursive(nbr, str, len - 1);
	return (str);
}
#include <stdio.h>
int main(int ac, char **av)
{
	(void) ac;
	char *str = ft_itoa(ft_atoi(av[1]));
	printf("%s\n", str);
}