/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:37:38 by svarela           #+#    #+#             */
/*   Updated: 2023/10/26 11:09:29 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static	int	count_char(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (count < 1)
		return (1);
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_char(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (0);
	str[i] = 0;
	str[0] = '0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = -1 * n;
	}
	while (n > 0)
	{
		str[i] = (char)((n % 10) + '0');
		n = n / 10;
		i--;
	}
	return (str);
}

/*int	main(void)
{
	int n = 4569;
	char *result = ft_itoa(n);

	if (result != NULL)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	return (0);
}*/
