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

char	*newline(char **stash)
{
	size_t	i;
	char	*dest;
	char	*new_stash;

	i = 0;
	if (!*stash || **stash == '\0')
		return (NULL);
	while ((*stash)[i] == '\n' && (*stash)[i])
		i++;
	if ((*stash)[i] == '\n')
		i++;
	dest = ft_substr(*stash, 0, i);
	new_stash = ft_strdup(*stash + i);
	free(*stash);
	*stash = new_stash;
	return(dest);
}
	
char	*get_next_line(int fd)
{
	static char	*stash;
	char 		*buffer;
	size_t		nbyte;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	nbyte = 1;
	while (nbyte > 0 && !ft_strchr(stash, '/n'))
	{
		nbyte = read(fd, buffer, BUFFER_SIZE);
		if (nbyte == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[nbyte] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return(newline(&stash));
}