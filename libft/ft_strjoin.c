/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:08:46 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/20 14:14:45 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*destmal(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	char	*dest;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (len + len2 + 1));
	if (dest == NULL)
		return (NULL);
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	n;

	if (!s1 || !s2)
		return (NULL);
	dest = destmal(s1, s2);
	if (dest == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		dest[i] = s2[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
