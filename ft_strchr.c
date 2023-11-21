/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:05:41 by svarela           #+#    #+#             */
/*   Updated: 2023/10/16 17:45:22 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *)s);
		}
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	const char *cadena = "Hola, mundo!";
	char caracter = 'm';

	char *resultado = ft_strchr(cadena, caracter);

	if (resultado)
	{
		printf("'%c' encontrado en posición %ld\n", caracter, resultado - cadena);
	}
	else
	{
		printf("'%c' no encontrado en la cadena.\n", caracter);
	}

	return (0);
}*/
