/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achoukei <achoukei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:21:16 by achoukei          #+#    #+#             */
/*   Updated: 2025/11/02 13:45:45 by achoukei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	if (*s != '\0' && word == 0)
		return (1);
	return (word);
}

static int	ft_strlenc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;
	int		s_len;

	s_len = ft_strlen(s);
	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * count_words(s, c));
	if (arr == 0)
		return (0);
	while (i < count_words(s, c))
	{
		arr[i] = (char *)malloc(sizeof(char) * (ft_strlenc(&s[j], c) + 1));
		while (s[j] == c)
			j++;
		arr[i] = ft_substr(&s[j], 0, ft_strlenc(&s[j], c));
		i++;
		j += ft_strlenc(&s[j], c) + 1;
	}
	return (arr);
}
// int	main(void)
// {
// 	char	s[] = "           ";
// 	char	c;
// 	int		i;
// 	char	**arr;

// 	c = ' ';
// 	i = count_words(s, c);
// 	arr = malloc(sizeof(char *) * i);
// 	arr = ft_split(s, c);
// 	i = 0;
// 	while (i < count_words(s, c))
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }
