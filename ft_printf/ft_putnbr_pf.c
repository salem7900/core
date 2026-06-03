/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:25:03 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/03 12:25:04 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int i)
{
	long	n;
	int		count;

	n = i;
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = n * -1;
	}
	if (n > 9)
		count = count + ft_putnbr_pf(n / 10);
	count = count + ft_putchar_pf((n % 10) + '0');
	return (count);
}
