/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:14:40 by achoukei          #+#    #+#             */
/*   Updated: 2025/10/30 18:09:21 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	ft_strleng(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		s_len;
	int		i;

	p = (char *)s;
	s_len = ft_strleng(s);
	i = s_len;
	while (i > 0)
	{
		if (p[i] == c)
			return (p + i);
		i--;
	}
	if (c == '\0')
		return (p + s_len);
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "hello WorldW!";
// 	printf("ft_strchr:%s\n", ft_strrchr(s, 'p'));
// 	printf("strchr:%s\n", strrchr(s, 'p'));
// }
