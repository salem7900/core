/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:00:23 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/26 13:00:26 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p;
	size_t		i;

	i = 0;
	p = s;
	while (p[i])
	{
		if (p[i] == (char)c)
			return ((char *)p + i);
		i++;
	}
	if (p[i] == (char)c)
		return ((char *)p + i);
	return (NULL);
}
