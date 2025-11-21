/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:24:58 by misousa           #+#    #+#             */
/*   Updated: 2025/11/21 17:23:40 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printconv(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putnbr_uns(va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_putnbr_lowhex(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_putnbr_uphex(va_arg(args, unsigned int));
	else if (c == '%')
		count += ft_putchar('%');
	else
		count = -1;
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == '%')
		{
			i++;
			count += ft_printconv(args, s[i]);
			i++;
		}
		if (s[i] != '\0')
			count += ft_putchar(s[i++]);
	}
	if (count < 0)
		return (-1);
	va_end(args);
	return (count);
}

/* int	main(void)
{
	int count;


	// count = printf("% % % % %");
	

	count = ft_printf(" %x ", LONG_MAX);
	printf("%d\n", count);
} */