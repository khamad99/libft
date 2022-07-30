/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:06:50 by kalshaer          #+#    #+#             */
/*   Updated: 2022/07/24 09:08:08 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	i = ft_strlen((char *)needle);
	while (*haystack != 0 && len > i)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, i))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
