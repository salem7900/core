/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:16:03 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/20 14:54:18 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strlen1(const char *str)
{
	int		len;
	char	*dest;

	len = 0;
	while (str[len])
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	return (dest);
}

static int	setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static void	trimstart(const char *str, char *dest, char const *set)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (setcheck(str[i], set) == 1 && str[i])
		i++;
	if (str[i] == '\0')
	{
		dest[0] = '\0';
		return ;
	}
	while (str[i])
	{
		dest[x] = str[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return ;
}

static void	trimend(char *dest, char const *set)
{
	int	len;

	len = ft_strlen(dest) - 1;
	while (setcheck(dest[len], set) == 1 && dest[len])
	{
		dest[len] = '\0';
		len--;
	}
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	dest = ft_strlen1(s1);
	if (dest == NULL)
		return (NULL);
	trimstart(s1, dest, set);
	trimend (dest, set);
	return (dest);
}
