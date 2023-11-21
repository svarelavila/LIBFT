/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:39:55 by svarela           #+#    #+#             */
/*   Updated: 2023/11/07 16:32:02 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*dest;

	dest = b;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	cadena[60] = "Haciendo repaso";

	ft_memset(cadena, '$', 4);
	printf("Función ft_memset: %s\n", cadena);
	memset(cadena, '$', 4);
	printf("Función memset: %s\n", cadena);
}*/
