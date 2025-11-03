/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:50:02 by achoukei          #+#    #+#             */
/*   Updated: 2025/10/30 21:50:54 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		size;
	int		j;
	char	*substr;

	j = 0;
	size = len - start;
	if (size <= 0)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * size);
	while (start < len)
	{
		substr[j] = s[start];
		start++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char	s[] = "hello";

// 	printf("%s", ft_substr(s, 2, 5));
// 	// printf("%s", s);
// }
