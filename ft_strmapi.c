/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:34:15 by svarela           #+#    #+#             */
/*   Updated: 2023/10/23 12:56:01 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_funtion(unsigned int i, char str)
{
	if (str != '\0')
	{
		return (str - 32);
	}
	return (str);
}

int	main(void)
{
	char	*str;
	char	*result;

	str = "adios";
	printf("Cadena de entrada: %s\n", str);
	result = ft_strmapi(str, ft_funtion);
	printf("Cadena de salida: %s\n", result);
	return (0);
}*/
