/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:55 by svarela           #+#    #+#             */
/*   Updated: 2023/10/23 13:56:30 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, (char *)&s[i]);
		i++;
	}
}

/*void	ft_change(unsigned int i, char *str)
{
	*str = *str + i;
}

int	main(void)
{
	char string[] = "abcde";

	printf("Cadena sin modificar: %s\n", string);
	ft_streteri(string, ft_change);
	printf("Cadena modificada: %s\n", string);
	return (0);
}*/
