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

static char *newline(int fd, char *ptr)
{
	size_t	n;
	char	*buffer;
	size_t	nbyte;

	n = 0;
	buffer = malloc(BUFFER_SIZE + 1);
	nbyte = read(fd, buffer, BUFFER_SIZE);
	if(nbyte > 0)
		buffer[nbyte] = '\0';
	while (buffer[n])
	{
		*ptr = buffer[n];
		if (buffer[n] == '\n')
			return (ptr);
char	*get_next_line(int fd)
{
	static char	*ptr;
	size_t          buffer;
	size_t		n;
	
	return (ptr);
}
