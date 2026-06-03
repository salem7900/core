/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:24:27 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/03 12:24:28 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr_pf(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	if (c == 'u')
		return (ft_putunsign_pf(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_puthexa_pf(va_arg(args, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthexa_pf(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar_pf('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count = count + ft_convert(args, str[i + 1]);
			i = i + 2;
		}
		else
		{
			count = count + ft_putchar_pf(str[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
