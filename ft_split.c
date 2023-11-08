/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:05:34 by hibouzid          #+#    #+#             */
/*   Updated: 2023/11/08 22:04:24 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_separator(char s, char c)
{
	return ((c == s));
}

int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!is_separator(s[0], c))
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (is_separator(s[i], c) && s[i + 1] && !is_separator(s[i + 1], c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_alloc(char **ptr, const char *s, char c, int e)
{
	int	i;
	int	j;
	int	f;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (is_separator(s[i], c) && s[i])
			i++;
		f = i;
		if (!s[f])
			break ;
		while (!is_separator(s[f], c) && s[f])
			f++;
		ptr[j] = malloc(sizeof(char) * (2 + f - i));
		f = 0;
		while (s[i] && !is_separator(s[i], c))
			ptr[j][f++] = s[i++];
		ptr[j][f] = 0;
		j++;
		if (j == e)
			break ;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s || !*s)
	{
		ptr = malloc(sizeof(char *));
		ptr[0] = 0;
		return (ptr);
	}
	ptr = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ptr)
		return (NULL);
	ptr[ft_count(s, c)] = 0;
	return (ft_alloc(ptr, s, c, ft_count(s, c)));
}

// int main()
// {
// 	char **ptr;

// 	ptr = ft_split("", ' ');
// 	int i = 0;
// 	for (;ptr[i]; i++)
// 		printf("number is %d and the string  : %s\n", i, ptr[i]);
// }
