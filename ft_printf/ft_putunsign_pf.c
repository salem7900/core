/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:25:26 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/03 12:25:28 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsign_pf(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count = count + ft_putunsign_pf(n / 10);
	count = count + ft_putchar_pf((n % 10) + '0');
	return (count);
}
