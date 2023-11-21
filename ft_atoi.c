/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:44:28 by svarela           #+#    #+#             */
/*   Updated: 2023/11/02 12:44:28 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	str++;
	if (*str == '-')
	sign *= -1;
	if (*str == '-' || *str == '+')
	str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

/*int	main(void)
{
	const char *str = "-1234";
	int result = ft_atoi(str);
	printf("\nPROPIA: Cadena convertida a entero: %d\n", result);

	int result1 = atoi(str);
	printf("\nORIGINAL: Cadena convertida a entero: %d\n", result1);

	return (0);
}*/
