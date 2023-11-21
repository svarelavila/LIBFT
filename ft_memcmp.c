/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:12:21 by svarela           #+#    #+#             */
/*   Updated: 2023/10/23 15:16:11 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char *str1 = "hola";
	const char *str2 = "mundo";
	int result;

	result = ft_memcmp(str1, str2, 5);
	if (result < 0)
		printf("str1 es menor que str2\n");
	else if (result > 0)
		printf("str1 es mayor que str2\n");
	else
		printf("str 1 y str2 son iguales\n");
	return (0);
}*/
