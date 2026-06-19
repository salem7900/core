/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:07:43 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/20 12:43:50 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	i;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] && x < len)
	{
		i = 0;
		while (haystack[x + i] == needle[i] && needle[i] && haystack[x + i]
			&& (x + i) < len)
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return ((char *)&haystack[x]);
		}
		x++;
	}
	return (NULL);
}

/* int main(int ac, char *av[])
{
	char	*s1;

	printf("Stringa: %s\n", av[1]);
	printf("Da trovare: %s\n", av[2]);
	s1 = ft_strstr(av[1], av[2]);
	printf("Risultato: %c\n", *s1);
} */
