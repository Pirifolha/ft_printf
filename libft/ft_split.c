/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:54:19 by misousa           #+#    #+#             */
/*   Updated: 2025/11/12 18:19:37 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && (i == 0 || s[i - 1] == c)))
			words++;
		i++;
	}
	return (words);
}

static int	*wordlen(const char *s, char c, int words)
{
	int	i;
	int	*result;
	int	count;

	i = 0;
	count = 0;
	result = malloc(words * sizeof(int));
	if (result == 0)
		return (0);
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		if ((s[i] == c && i > 0 && s[i - 1] != c))
		{
			result[words] = count;
			words++;
			count = 0;
		}
		i++;
	}
	if (count > 0)
		result[words] = count;
	return (result);
}

static char	**writestr(char **result, char const *s, char c, int *len)
{
	int	i;
	int	j;
	int	k;
	int	words;

	i = 0;
	k = 0;
	words = count_words(s, c);
	while (i < words)
	{
		j = 0;
		while (j < len[i])
		{
			while (s[k] == c)
				k++;
			result[i][j] = s[k];
			j++;
			k++;
		}
		result[i][j] = '\0';
		i++;
	}
	return (result);
}

static void	free_mem(char **result, int i)
{
	while (i > 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		*len;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	len = wordlen(s, c, words);
	if (!len)
		return (0);
	result = malloc((words + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	result[words] = NULL;
	while (i < words)
	{
		result[i] = malloc(len[i] + 1 * sizeof(char));
		if (result[i] == 0)
			return (free_mem(result, i), free(len), NULL);
		i++;
	}
	result = writestr(result, s, c, len);
	return (free(len), result);
}

/* int	main(void)
{
	char **res;
	int words;

	words = count_words("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	res = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');

	printf("%d\n", words);
	for (int i = 0; i < words; i++)
	{
		printf("%s\n", res[i]);
		free(res[i]);
	}
	free((void *)res);
} */