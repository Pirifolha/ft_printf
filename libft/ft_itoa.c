/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:29:00 by misousa           #+#    #+#             */
/*   Updated: 2025/11/07 18:25:21 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checksize(long nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*writenbr(char *result, long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		result[i] = '-';
		nb = -nb;
		i++;
	}
	i = (checksize(nb) + i);
	result[i--] = '\0';
	if (nb > 9)
	{
		while (nb > 9)
		{
			result[i] = (nb % 10) + 48;
			nb = nb / 10;
			i--;
		}
	}
	result[i] = nb + 48;
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;

	nb = n;
	result = malloc(checksize(n) * sizeof(char) + 1);
	if (result == 0)
		return (0);
	writenbr(result, nb);
	return (result);
}

/* int	main(void)
{
	char *result;

	result = ft_itoa(10435);

	printf("%s\n", result);
} */