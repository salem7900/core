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

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (s[len])
		len++;
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

static char	*destall(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*dest;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	return (dest);
}

static size_t	lencheck(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	if (len > s_len - start)
		len = s_len - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	len = lencheck(s, start, len);
	dest = destall(s, start, len);
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
