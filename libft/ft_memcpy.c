/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:21:32 by misousa           #+#    #+#             */
/*   Updated: 2025/11/06 19:55:01 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dst);
}
/* int	main(void)
{
	char str[20] = "Learningisfun";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);

	ft_memcpy(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);
} */