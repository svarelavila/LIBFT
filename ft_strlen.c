/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:59:09 by svarela           #+#    #+#             */
/*   Updated: 2023/10/12 17:55:23 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}
/*
int	main(void)
{
	char	cadena[20] = "hola, que tal?";
	size_t	len;

	len = strlen(cadena);
	printf("\n\nFunción original strlen: %zu\n", len);
	len = ft_strlen(cadena);
	printf("\n\nFunción nueva ft_strlen: %zu\n\n", len);
}*/
