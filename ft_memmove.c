/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:39:49 by svarela           #+#    #+#             */
/*   Updated: 2023/10/31 15:25:36 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest_cast;
	char	*src_cast;

	dest_cast = (char *)dst;
	src_cast = (char *)src;
	i = 0;
	if (src < dst)
	{
		while (len > 0)
		{
			dest_cast[len - 1] = src_cast[len - 1];
			len--;
		}
	}
	else if (dst < src)
	{
		while (i < len)
		{
			dest_cast[i] = src_cast[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	src[50] = "hola pepe, que ta?";
	char	dest[50] = "adios";

	printf("\n\nDESTINO INICIAL: %s\n", src);
	ft_memmove(dest, src, 3);
	printf("\n\nDESTINO FINAL: %s\n", dest);
	printf("\n\nDESTINO INICIAL: %s\n", src);
	memmove(dest, src, 3);
	printf("\n\nDESTINO FINAL: %s\n", dest);
}*/
