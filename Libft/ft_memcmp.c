/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:58:38 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/03 15:13:31 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*f1;
	unsigned char	*f2;

	i = 0;
	f1 = (unsigned char *)s1;
	f2 = (unsigned char *)s2;
	while (i < n - 1 && f1[i] != '\0' && f2[i] != '\0' && f1[i] == f2[i])
	{
		i++;
	}
	return (f1[i] - f2[i]);
}

// int main()
// {
// 	printf("%d", ft_memcmp("hello", "hella", 6));
// }
