/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:28:03 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/19 11:28:05 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	neg;
	int	x;

	n = 0;
	neg = 1;
	x = 0;
	while ((nptr[n] >= 9 && nptr[n] <= 13) || nptr[n] == 32)
		n++;
	if (nptr[n] == '-' || nptr[n] == '+')
	{
		if (nptr[n] == '-')
			neg = neg * -1;
		n++;
	}
	if (nptr[n] < '0' || nptr[n] > '9')
		return (0);
	while (nptr[n] >= '0' && nptr[n] <= '9')
	{
		x = x * 10 + (nptr[n] - '0');
		n++;
	}
	return (x * neg);
}
/*
int	main()
{
	int	val = ;

	val = ft_atoi(av[1]);
	printf("Risultato: %d\n", val);
}
*/
