/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:53:45 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/10/28 15:53:20 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s != ch)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

/* int    main(void)
{
	char *str = "abcdfg";

	char ch = 'b';

	printf("%s\n", ft_strchr(str, ch));
} */