/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:32:14 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/11 18:18:52 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief 
/// @param s 
/// @param c 
/// @return 
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (0);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/* int	main(void)
{
	int c = '\0';

	const char *res = ft_strrchr(((void *)0), c);
	const char *res2 = strrchr(((void *)0), c);

	printf("%s\n", res);
	printf("%s\n", res2);
} */