/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:49:48 by svarela           #+#    #+#             */
/*   Updated: 2023/10/16 18:49:48 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)haystack);
	while (haystack[h] && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && needle[n] && (h + n) < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *pajar = "casa";
	const char *aguja = "asa"; // Subcadena que buscamos
	size_t len = 40; // Límite de búsqueda en haystack

	char *result = ft_strnstr(pajar, aguja, len);

	if (result != NULL)
	{
		printf("\nPROPIA: Se encontró la subcadena: %s\n", result);
	}
	else
	{
		printf("\nORIGINAL: La subcadena no se encontró en la cadena.\n");
	}
	char *result1 = strnstr(pajar, aguja, len);

	if (result != NULL)
	{
		printf("\nPROPIA: Se encontró la subcadena: %s\n", result1);
	}
	else
	{
		printf("\nORIGINAL: La subcadena no se encontró en la cadena.\n");
	}
	return (0);
}*/
