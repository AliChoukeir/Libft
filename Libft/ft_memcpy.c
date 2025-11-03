/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:39:42 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/03 15:13:33 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *)src;
	p = (unsigned char *)dest;
	while (d[i] != 0 && i < n)
	{
		p[i] = (unsigned char)d[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// int main()
// {
// 	char *s = "abcefg";
// 	char d[1000];
// 	printf("%s", (char *)ft_memcpy(d,s,2));
// }
