/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:24:56 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/03 12:24:57 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_pf(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n > 15)
		count = count + ft_puthexa_pf(n / 16, base);
	count = count + ft_putchar_pf(base[n % 16]);
	return (count);
}
