/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:12:43 by svarela           #+#    #+#             */
/*   Updated: 2023/10/17 18:26:55 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(*s) * (len) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[len] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	s[] = "Esta es una cadena de prueba";
	unsigned int start = 5;
	size_t len = 10;
	char *str = ft_substr(s, start, len);
	if (str)
	{
		printf("Cadena original: %s\n", s);
		printf("Subcadena: %s\n", str);
		free(str);
	}
	else
	{
		printf("Error al crear la subcadena\n");
	}
	return (0);
}*/