/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:58:34 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/18 14:38:05 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	if (p1 > p2)
		while (n-- > 0)
			p1[n] = p2[n];
	else
	{
		i = 0;
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (dest);
}
