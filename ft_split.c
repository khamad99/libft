/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:52:50 by kalshaer          #+#    #+#             */
/*   Updated: 2022/07/31 23:00:06 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countw(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char **min (char const *s, char c, char **r, int i)
{
	size_t	len;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			r[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	r[i] = NULL;
	return (r);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		i;

	r = (char **)malloc((countw(s, c) + 1) * sizeof(char *));
	if (!s || !r)
		return (0);
	i = 0;
	r = min (s, c, r, i);
	// while (*s)
	// {
	// 	while (*s == c && *s)
	// 		s++;
	// 	if (*s)
	// 	{
	// 		if (!ft_strchr(s, c))
	// 			len = ft_strlen(s);
	// 		else
	// 			len = ft_strchr(s, c) - s;
	// 		r[i++] = ft_substr(s, 0, len);
	// 		s = s + len;
	// 	}
	// }
	// r[i] = NULL;
	if (!r[0])
		free(r);
	return (r);
}