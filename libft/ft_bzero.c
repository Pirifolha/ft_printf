/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:59:45 by misousa           #+#    #+#             */
/*   Updated: 2025/11/07 18:08:17 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*nptr;

	i = 0;
	nptr = s;
	while (i < n)
	{
		nptr[i] = '\0';
		i++;
	}
}

/* int main()
{
	char str[10] = "ABCDEFGHI";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_bzero(str+2, 4*sizeof(char));

	printf("After memset():  %s\n", str);
	return (0);
}  */