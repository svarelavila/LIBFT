/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:51:46 by svarela           #+#    #+#             */
/*   Updated: 2023/10/23 16:00:14 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	int		len1;
	int		len2;
	char	*str1;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	x = -1;
	str1 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str1)
		return (NULL);
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	while (s2[++x])
		str1[i++] = s2[x];
	str1[i] = '\0';
	return (str1);
}

/*int	main(void)
{
	const char *s1 = "Hola";
	const char *s2 = " mundo";
	char *result;

	result = ft_strjoin(s1, s2);
	if (result != NULL)
	{
		printf("\nNueva string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al unir las cadenas.\n");
	}
	return (0);
}*/
