/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:11:03 by achoukei          #+#    #+#             */
/*   Updated: 2025/10/30 21:52:26 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

static int	ft_minus_number(char *str)
{
	int	i;
	int	minus;

	minus = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '-' || (str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32)
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	return (minus);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		i;
	int		minus;
	char	*str;

	str = (char *)nptr;
	minus = 0;
	i = 0;
	result = 0;
	if (*str == '\0')
		return (0);
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10 + (str[i] % 48));
		i++;
	}
	minus = ft_minus_number(str);
	if (minus % 2 != 0)
		result *= -1;
	return (result);
}
// int	main(void)
// {
// 	printf("%d", ft_atoi("--42d"));
// }
