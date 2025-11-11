/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:24:02 by misousa           #+#    #+#             */
/*   Updated: 2025/10/28 12:06:35 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

/* int	main(void)
{
	int c = '3';

	printf("%i\n", ft_isprint(c));
	return (0);
} */