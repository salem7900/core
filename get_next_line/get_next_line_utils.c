/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:39:48 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/03 13:44:18 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(const char *s)
{
	size_t	n;

	if (!s)
		return (0);
	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

static char	*destmal(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	char	*dest;
	size_t	i;

	len = 0;
	if (s1)
		len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (len + len2 + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	n;
	size_t	i;

	if (!s2)
		return (NULL);
	dest = destmal(s1, s2);
	if (dest == NULL)
		return (NULL);
	n = 0;
	i = 0;
	if (s1)
		i = ft_strlen(s1);
	while (s2[n])
	{
		dest[i + n] = s2[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

static char	*destall(char const *s, unsigned int start, size_t *len)
{
	size_t	s_len;
	char	*dest;

	s_len = ft_strlen(s);
	if (start >= s_len)
		*len = 0;
	else if (*len > s_len - start)
		*len = s_len - start;
	dest = malloc(sizeof(char) * (*len + 1));
	if (!dest)
		return (NULL);
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	dest = destall(s, start, &len);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
