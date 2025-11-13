/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:58:12 by misousa           #+#    #+#             */
/*   Updated: 2025/11/12 22:38:54 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (0);
	result = malloc(nmemb * size);
	if (result == 0)
		return (0);
	ft_memset(result, 0, (nmemb * size));
	return (result);
}

/* int	main(void)
{
	int		n;
	int	*array;
	int i;

	n = 2;
	i = 0;
	// use calloc function to allocate the memory
	array = (int *)ft_calloc(n, 4);
	// Display the array value
	printf("Array elements after calloc: ");
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	// free the allocated memory
	free(array);
	return (0);
} */
