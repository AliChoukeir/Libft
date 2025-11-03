/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:45:20 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/02 19:40:21 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc((sizeof(char)) * (s1_len + s2_len));
	if (result == 0)
		return (0);
	result = ft_memcpy(result, s1, s1_len);
	result = result + s1_len;
	result = ft_memcpy(result, s2, s2_len);
	result[s1_len + s2_len] = '\0';
	return (result - s1_len);
}

// int	main(void)
// {
// 	char	s1[] = "hi";
// 	char	s2[] = "hello";int	main(void)
// {
// 	char	s1[] = "hi";
// 	char	s2[] = "hello";

// 	printf("%s", ft_strjoin(s1, s2));
// }
// }
