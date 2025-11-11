/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:13:02 by misousa           #+#    #+#             */
/*   Updated: 2025/11/06 20:46:09 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= slen)
		len = 0;
	if (len > slen - start)
		len = slen - start;
	result = malloc(len + 1);
	if (!result)
		return (0);
	while (i < len)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* int	main(void)
{
	char *result;

	result = ft_substr("abc", 1, 100);

	printf("This is the sub string: %s\n", result);
	free(result);
} */