/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:25:59 by achoukei          #+#    #+#             */
/*   Updated: 2025/10/30 21:51:47 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n && *p != '\0')
	{
		if (*p == c)
			return (p);
		i++;
		p++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s[] = "Hello World ! ";
// 	size_t	n;
// 	char	c;

// 	n = 15;
// 	c = 'O';
// 	printf("ft_memchr:%s\n", (char *)ft_memchr(s, c, n));
// 	printf("memchr:%s\n", (char *)memchr(s, c, n));
// }
