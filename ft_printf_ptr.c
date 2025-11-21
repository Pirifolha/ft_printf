/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:04:58 by misousa           #+#    #+#             */
/*   Updated: 2025/11/21 17:37:19 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_lowhexh(t_llong nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += ft_putnbr_lowhexh(nb / 16);
	count += ft_putchar(base[nb % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int		count;
	t_llong	s;

	count = 0;
	s = (t_llong)ptr;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_putnbr_lowhexh(s);
	return (count);
}

/* int	main(void)
{
	char *str;

	str = "asda";

	ft_putptr(&str);
} */