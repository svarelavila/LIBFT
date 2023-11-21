/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svarela <svarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:45 by svarela           #+#    #+#             */
/*   Updated: 2023/10/12 17:52:01 by svarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
/*
int	main()
{
	size_t count = 10;
	size_t size = sizeof(int);

	int *arr = (int *)ft_calloc(count, size);

	printf("Valores del arreglo:\n");
	size_t i;
	i = 0;
	while (i < count)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/
