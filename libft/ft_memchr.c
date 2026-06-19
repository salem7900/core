/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:12:24 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/20 12:35:31 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	ch;

	i = 0;
	p = (unsigned char *)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == ch)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}
