/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:39:29 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/08 13:41:22 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p;
	size_t		i;

	i = 0;
	p = s;
	if (!s)
		return (NULL);
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

char	*newline(char **stash)
{
	size_t	i;
	char	*dest;
	char	*new_stash;

	i = 0;
	if (!*stash || **stash == '\0')
		return (NULL);
	while ((*stash)[i] != '\n' && (*stash)[i])
		i++;
	if ((*stash)[i] == '\n')
		i++;
	dest = ft_substr(*stash, 0, i);
	new_stash = ft_strdup(*stash + i);
	free(*stash);
	*stash = new_stash;
	return (dest);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	ssize_t		nbyte;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	nbyte = 1;
	while (nbyte > 0 && !ft_strchr(stash, '\n'))
	{
		nbyte = read(fd, buffer, BUFFER_SIZE);
		if (nbyte == -1)
		{
			free(buffer);
			free(stash);
			stash = NULL;
			return (NULL);
		}
		buffer[nbyte] = '\0';
		tmp = ft_strjoin(stash, buffer);
		free(stash);
		stash = tmp;
	}
	free(buffer);
	return (newline(&stash));
}
