/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:08:33 by svarela           #+#    #+#             */
/*   Updated: 2023/10/16 17:56:41 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
	{
		return (srclen);
	}
	if (dstsize <= dstlen)
	{
		return (srclen += dstsize);
	}
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src)
	{
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);
}

/*int	main(void)
{
	const char source[] = "AndrEider";
	char destin[] = "Robot";
	size_t dstysize;
	dstysize = 5;
	printf("FUNCION PROPIA");
	printf("caracteres del string 1: %lu\n", ft_strlcat(destin, source, dstysize));
	printf("Destin = string 2: %zu\n", dstysize);
	printf("FUNCION ORIGINAL");
	printf("caracteres del string 1: %lu\n", strlcat(destin, source, dstysize));
	printf("Destin = string 2: %zu\n", dstysize);
	return (0);
}*/
