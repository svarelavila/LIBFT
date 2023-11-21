/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:45:53 by svarela           #+#    #+#             */
/*   Updated: 2023/11/02 12:45:53 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	const char *string = "hola mundo";
	int character = 'l';

	char *result = ft_strrchr(string, character);

	printf("\n%s\n", string);
	if(result != NULL)
	{
		printf("\nPROPIA:'%c' en posicion %ld\n", character, result - string);
	}
	else
	{
		printf("\nPROPIA: '%c' NO encuentrado en cadena\n\n", character);
	}

	char *result2 = strrchr(string, character);
	if(result != NULL)
	{
		printf("\nORIGINAL: '%c' en posicion %ld\n", character, result2 - string);
	}
	else
	{
		printf("\nORIGINAL: '%c' NO encuentrado en cadena\n\n", character);
	}
	return (0);
}*/
