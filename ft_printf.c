/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:24:58 by misousa           #+#    #+#             */
/*   Updated: 2025/11/17 20:32:06 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printconv(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		count += ft_putstr(va_arg(args, void *));
	/* else if (c == 'h')
		count += ft_put */
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
	va_end(args);
	return (count);
}

int	main(void)
{
	/* printf("hello my name is %s%s and im %d years old%c\n", 33, "sousa", 24,
		'!'); */

	int count = ft_printf("hello %%%% %s%s%i%c\n", "miguel", "sousa", 24, '!');
	ft_printf("%d\n", count);
}