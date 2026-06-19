/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:55:08 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/26 12:55:42 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	baselen(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	filldest(char *dest, int n, int len)
{
	long	nu;
	int		neg;

	neg = 0;
	nu = n;
	len--;
	if (nu < 0)
	{
		dest[0] = '-';
		nu = nu * -1;
		neg = 1;
	}
	while (len >= 0)
	{
		dest[len] = (nu % 10) + '0';
		nu = nu / 10;
		len--;
		if (neg == 1 && len == 0)
			break ;
	}
	return ;
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;

	len = baselen(n);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	filldest(dest, n, len);
	return (dest);
}

/*
int	main()
{
	int n = 2147483647;
	char *dest;

	dest = ft_itoa(n);
	printf("Num: %d\n", n);
	printf("Str: %s\n", dest);
}
*/
