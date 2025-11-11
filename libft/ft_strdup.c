/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:46:07 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 13:21:10 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s);

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *s)
{
	char	*dest;

	dest = malloc(ft_strlen(s) + 1);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, s);
	return (dest);
}

/* int	main(void)
{
	char *src = "saddsadsadsa";

	char *dest;

	dest = ft_strdup(src);

	printf("%s\n", dest);
} */