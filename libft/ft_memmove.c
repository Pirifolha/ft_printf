/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:30:01 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/07 18:36:29 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*to;
	const unsigned char	*from;
	size_t				i;

	if (!dst && !src)
		return (0);
	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	i = 0;
	if (to > from)
		while (n--)
			to[n] = from[n];
	else
	{
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char str[10] = "abcdef";
	ft_memmove(str + 2, str, 4);
	printf("%s\n", str);

	return (0);
} */