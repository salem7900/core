/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:44:50 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/20 14:15:15 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = malloc (size * nmemb);
	if (dest == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
