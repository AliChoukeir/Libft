/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:31:44 by achoukei          #+#    #+#             */
/*   Updated: 2025/10/29 01:55:57 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	int	arr[6] = {1, 6, 87, 8, 5, 0};

// 	ft_bzero(arr, 10 * sizeof(int));
// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("%d,", arr[i]);
// 	}
// }
