/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:47:13 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/03 15:10:53 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	n_len;

	n_len = 1;
	while (n > 10)
	{
		n_len++;
		n /= 10;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;
	int		i;
	long	n1;
	char	*c;

	n1 = n;
	i = 0;
	n_len = num_len(n);
	str = (char *)malloc(n_len + 1);
	c = malloc(1);
	while (i < n_len && n1 > 0)
	{
		*c = n1 % 10 + '0';
		str = ft_strjoin(c, str);
		n1 /= 10;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(5678787));
// }
