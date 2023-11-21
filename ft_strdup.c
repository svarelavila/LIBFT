/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:07:01 by svarela           #+#    #+#             */
/*   Updated: 2023/10/12 17:54:49 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	const char *original = "Ejemplo de cadena a duplicar";
	char *duplicated = ft_strdup(original);

	if (duplicated)
	{
		printf("Cadena original: %s\n", original);
		printf("Cadena duplicada: %s\n", duplicated);
		free(duplicated);
	}
	else
	{
		printf("Error al duplicar la cadena. Memoria insuficiente.\n");
	}

	return (0);
}*/