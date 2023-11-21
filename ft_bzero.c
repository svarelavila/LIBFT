/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:38:36 by svarela           #+#    #+#             */
/*   Updated: 2023/11/16 17:23:35 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char	str[50] = "Rellenar de ceros";
	char	str1[50] = "Rellenar de ceros";

	write(1, &str, 20);
	write(1, "\n", 1);
	bzero(str, 4);
	write(1, &str, 20);
	write(1, "\n", 1);
	ft_bzero(str1, 4);
	write(1, &str1, 20);
	write(1, "\n", 1);
	return (0);
}*/
