/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:22:14 by svarela           #+#    #+#             */
/*   Updated: 2023/11/07 13:44:47 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	const char *str1 = "Hola";
	const char *str2 = "Hola1";
	size_t n = 7;

	int result = ft_strncmp(str1, str2, n);

	if (result < 0)
	{
		printf("'%s' es menor que '%s'\n", str1, str2);
	}
	else if (result > 0)
	{
		printf("'%s' es mayor que '%s'\n", str1, str2);
	}
	else
	{
		printf("'%s' es igual a '%s'\n", str1, str2);
	}

	return (0);
}*/
