/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:09:12 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/11/11 17:44:57 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ((void)0);
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_fd(NULL, 2);
}
