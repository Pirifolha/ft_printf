/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:45:24 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/07 18:24:52 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cto;
	unsigned char		ch;
	size_t				i;

	ch = (unsigned char)c;
	cto = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cto[i] == ch)
			return ((void *)cto + i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char *str = "odsdasovvk";
	char c = 'o';
	int s = 20;

	char *res = ft_memchr(str, c, s);

	printf("%s\n", res);
} */