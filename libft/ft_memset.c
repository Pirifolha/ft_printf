/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:37:07 by misousa           #+#    #+#             */
/*   Updated: 2025/11/06 18:23:56 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*nptr;

	i = 0;
	nptr = (unsigned char *)s;
	while (i < n)
	{
		nptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char str[10] = "asddasdasd";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	// ft_memset(str + 8, 'n', 4*sizeof(char));
	ft_memset(str, 'p', 10 * sizeof(char));

	printf("After memset():  %s", str);
	return (0);
} */