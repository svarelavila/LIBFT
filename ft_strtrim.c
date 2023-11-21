/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:49:24 by svarela           #+#    #+#             */
/*   Updated: 2023/10/26 12:08:23 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "HHla, munHo";
	set = "H";
	printf("Cadena original: %s\n", s1);
	printf("Cadena trimeada: %s\n", ft_strtrim(s1, set));
	return (0);
}*/
