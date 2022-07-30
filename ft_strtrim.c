/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:09:25 by kalshaer          #+#    #+#             */
/*   Updated: 2022/07/30 11:40:21 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static unsigned int	inset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	size;
	char			*start;
	char			*end;
	char			*r;
	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && inset(s1[i], set))
		i++;
	start = (char *)&s1[i];
	i = ft_strlen(s1) - 1;
	//if (i != -1)
	while (i >= 0 && inset(s1[i], set))
		i--;
	end = (char *)&s1[i];
	if (end == start) //!*s1 || 
		size = 2;
	else
		size = end - start + 2;
	r = malloc(sizeof(char) * size);
	if (!r)
		return (0);
	ft_strlcpy(r, start, size);
	return (r);
}
