/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:25:54 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/01 15:52:43 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == '\0')
		return (p);
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "hello World!";
// 	printf("ft_strchr:%s\n", ft_strchr(s, '	'));
// 	printf("strchr:%s\n", strchr(s, '	'));
// }
