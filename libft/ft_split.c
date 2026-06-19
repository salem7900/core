/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:50:21 by sabdalla          #+#    #+#             */
/*   Updated: 2026/05/20 14:51:05 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	wordcount(const char *str, char c)
{
	int	n;
	int	word;

	n = 0;
	word = 0;
	while (str[n])
	{
		while (str[n] && str[n] == c)
			n++;
		if (str[n])
			word++;
		while (str[n] && str[n] != c)
			n++;
	}
	return (word);
}

static void	fillstr(char **arr, const char *str, char c)
{
	int	i;
	int	word;
	int	n;

	word = 0;
	n = 0;
	while (str[n])
	{
		while (str[n] && str[n] == c)
			n++;
		if (str[n] == '\0')
			break ;
		i = 0;
		while (str[n] && str[n] != c)
		{
			arr[word][i] = str[n];
			i++;
			n++;
		}
		arr[word][i] = '\0';
		word++;
	}
	arr[word] = NULL;
}

static void	free_split(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

static int	memarray(char **arr, size_t len, size_t word)
{
	size_t	i;

	i = 0;
	while (i < word)
	{
		arr[i] = malloc((len + 1) * sizeof(char));
		if (!arr[i])
		{
			free_split(arr, i - 1);
			return (0);
		}
		i++;
	}
	arr[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	size_t		len;
	size_t		word;
	int			x;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	word = wordcount(s, c);
	arr = (char **)malloc((word + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	x = memarray(arr, len, word);
	if (!x)
		return (NULL);
	fillstr(arr, s, c);
	return (arr);
}
/*
int	main()
{
	char *str = "    ciaocome;va ,tutto,   ,-bene";
	char *charset = ",;- ";
	char **arr;
	int	i = 0;

	arr = ft_split(str, charset);
	while (arr[i] != NULL)
	{
		printf("%s ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
}
*/
