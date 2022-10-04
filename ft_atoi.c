#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;
	int	i;

	sign = 1;
	nbr = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
	}
	return (sign * nbr);
}
