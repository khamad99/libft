/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:52:50 by kalshaer          #+#    #+#             */
/*   Updated: 2022/08/17 08:00:30 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	countw(char const *s, char c)
// {
// 	size_t	count;

// 	if (!*s)
// 		return (0);
// 	count = 0;
// 	while (*s)
// 	{
// 		if (*s == c)
// 			s++;
// 		if (*s)
// 			count++;
// 		while (*s != c && *s)
// 			s++;
// 	}
// 	return (count);
// }

// static char	**min(char const *s, char c, char **r, int i)
// {
// 	size_t	len;

// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (*s)
// 		{
// 			if (!ft_strchr(s, c))
// 				len = ft_strlen(s);
// 			else
// 				len = ft_strchr(s, c) - s;
// 			r[i++] = ft_substr(s, 0, len);
// 			s = s + len;
// 		}
// 	}
// 	r[i] = NULL;
// 	return (r);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**r;
// 	int		i;

// 	if (!s)
// 		return (0);
// 	r = (char **)malloc((countw(s, c) + 1) * sizeof(char *));
// 	if (!r)
// 		return (0);
// 	i = 0;
// 	r = min (s, c, r, i);
// 	if (!r[0])
// 		free(r);
// 	return (r);
// }

static int	find_str(char const *s, char c)
{
	int	i;
	int	nb_str;

	i = 0;
	nb_str = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_str++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_str++;
	return (nb_str);
}

static void	get_next_str(char **next_str, size_t *next_strlen, char c)
{
	size_t	i;

	*next_str += *next_strlen;
	*next_strlen = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_strlen)++;
		i++;
	}
}

static char	**handle_malloc_err(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*next_str;
	size_t	next_strlen;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (find_str(s, c) + 1));
	if (!tab)
		return (NULL);
	next_str = (char *)s;
	next_strlen = 0;
	while (++i < find_str(s, c))
	{
		get_next_str(&next_str, &next_strlen, c);
		tab[i] = (char *)malloc(sizeof(char) * (next_strlen + 1));
		if (!tab[i])
			return (handle_malloc_err(tab));
		ft_strlcpy(tab[i], next_str, next_strlen + 1);
	}
	tab[i] = NULL;
	return (tab);
}