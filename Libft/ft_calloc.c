/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:01:54 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/03 15:13:11 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	arr = (void *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		((char *)arr)[i] = 0;
		i++;
	}
	((char *)arr)[i] = '\0';
	return (arr);
}

// int main()
// {
// 	char *s, *ss ;
// 	s = (char *)ft_calloc(-5,-5);
// 	ss = calloc(8, 2);
// 	printf("%s", s);
// 	printf("%s", ss);
// 	free(s);
// 	free(ss);
// }
