/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:11:05 by svarela           #+#    #+#             */
/*   Updated: 2023/10/31 17:11:05 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Esto es una prueba";
	char caracf = 't';
	size_t len = 0;

	void	*result = ft_memchr(str, caracf, len);
	if (result)
	{
		char *char_result = (char*)result;
		size_t position = (size_t)(char_result - str);
		printf("Carácter '%c' en la posición %zu\n", caracf, position);
	}
	else
	{
		printf("Carácter '%c' No\n", caracf);
	}
	return (0);
}*/
