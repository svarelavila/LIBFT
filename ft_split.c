/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:19:28 by svarela           #+#    #+#             */
/*   Updated: 2023/11/15 17:33:52 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(void **ss)
{
	size_t	i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free(ss);
}

static size_t	wlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	words(char const *s, char c)
{
	size_t	w;

	w = 0;
	while (*s)
	{
		if (s[0] != c && (s[1] == c || s[1] == 0))
			w++;
		s++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	ss = malloc(sizeof(char *) * (words(s, c) + 1));
	if (!ss)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words(s, c))
	{
		while (s[j] == c)
			j++;
		ss[i] = ft_substr(s, j, wlen(s + j, c));
		if (!ss[i])
			return (ft_free((void **)ss), NULL);
		i++;
		j += wlen(s + j, c);
	}
	ss[i] = NULL;
	return (ss);
}

/*int	main(void)
{
	char	**matrix;
	char	*str;
	char	c;
	int		i;

	c = ' ';
	str = "Es una función complicada";
	matrix = ft_split(str, c);
	i = 0;
	while (matrix[i])
	{
		printf("INDICE %i %s\n", i, matrix[i]);
		i++;
	}
	printf("INDICE %i %s\n", i, NULL);
	return (0);
}*/
