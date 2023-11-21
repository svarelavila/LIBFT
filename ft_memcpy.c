/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:12:07 by svarela           #+#    #+#             */
/*   Updated: 2023/10/23 16:52:43 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sour;
	size_t	i;

	if (src == 0 && dest == 0)
		return (0);
	dst = (char *) dest;
	sour = (char *) src;
	i = 0;
	while (i < n)
	{
		dst[i] = sour[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	//char	src[20] = "segfaulter tu dois";
	//char	dest[10] = "bbbbb";
	char	*dest;

	//printf("\n\nDESTINO INICIAL: %s\n", src);
	dest = ft_memcpy(0, 0, 3);
	printf("\n\nDESTINO FINAL: %p\n", dest);

	//printf("\n\nDESTINO INICIAL: %s\n", src);
	dest = memcpy(0, 0, 3);
	printf("\n\nDESTINO FINAL: %p\n", dest);
}
*/
