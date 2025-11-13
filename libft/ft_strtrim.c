/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:02:30 by misousa           #+#    #+#             */
/*   Updated: 2025/11/13 15:45:49 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		start;
	int		end;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = 0;
	while (checkset(set, s1[i]) == 1)
		i++;
	start = i;
	while (s1[end])
		end++;
	while (end > start && checkset(set, s1[end - 1]) == 1)
		end--;
	result = malloc(sizeof(char) * (end - start) + 1);
	if (result == 0)
		return (0);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

/* int	main(void)
{
	char *s1;
	char *set;
	char *result;

	s1 = "]]]]]Hello ]]  Please Trim me !]]]";
	set = "]";
	result = ft_strtrim(s1, set);

	printf("%s\n", result);
} */