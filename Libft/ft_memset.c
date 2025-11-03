/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:02:11 by achoukei          #+#    #+#             */
/*   Updated: 2025/10/30 21:38:34 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int *res ;
// 	res = ft_memset(arr, 2, 4);
// 	res = memset(arr, 2, 4);
// 	for (int i = 0; i < 4; i++) {
//         printf("%d,", arr[i]);
//     }
// }
