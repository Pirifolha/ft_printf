/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:02:54 by misousa           #+#    #+#             */
/*   Updated: 2025/11/19 21:41:07 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uphex(long nb)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 16)
	{
		count += ft_putnbr_uphex(nb / 16);
	}
	if (nb > 10)
	{
		count += ft_putchar(base[nb % 16]);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}

int	ft_putnbr_lowhex(long nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 16)
	{
		count += ft_putnbr_lowhex(nb / 16);
	}
	if (nb > 10)
	{
		count += ft_putchar(base[nb % 16]);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}

/* int	main(void)
{
	ft_putnbr_x(12);
} */