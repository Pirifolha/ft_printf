/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:51:05 by misousa           #+#    #+#             */
/*   Updated: 2025/11/06 19:28:20 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main(void)
{
	printf("%d\n", ft_strncmp("abcdef", "abc\375xx", 5));
	printf("%d\n", strncmp("abcdef", "abc\375xx", 5));
	printf("%d\n", ft_strncmp("abcX", "abcY", 3));
	printf("%d\n", strncmp("abcX", "abcY", 3));
} */