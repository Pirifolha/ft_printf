/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:04:13 by misousa           #+#    #+#             */
/*   Updated: 2025/11/13 15:44:36 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* int	main(void)
{
	char dest[6] = "hello2";
	char src[] = "world1";
	unsigned int size;
	unsigned int a;

	size = 6;
	a = ft_strlcat(dest, src, size);
	printf("%d", a);
	printf("\n");

	char x[6] = "hello2";
	char y[] = "world1";
	unsigned int z;

	z = 6;
	a = strlcat(x, y, z);
	printf("%d", a);
	printf("\n");
	printf("%s", x);
} */