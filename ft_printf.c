/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:24:58 by misousa           #+#    #+#             */
/*   Updated: 2025/11/13 19:17:22 by misousa          ###   ########.fr       */
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
	else if (c == 'd')
		count += ft_putnbr(va_arg(args, int));
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
			count += ft_printconv(args, s[i + 1]);
            i++;
            i++;
		}
		if (s[i] != '\0')
			count = ft_putchar(s[i++]);
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	/* printf("hello my name is %s%s and im %d years old%c\n", 33, "sousa", 24,
		'!'); */
	int count = ft_printf("hello %%%% %s%s%d%c\n", "miguel", "sousa", 24, '!');
	ft_printf("%d\n", count);
}