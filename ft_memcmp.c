/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:39:41 by kalshaer          #+#    #+#             */
/*   Updated: 2022/07/30 11:33:18 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*((const char *)s1 + i)) != 0 && (*((const char *)s1 + i))
			== (*((const char *)s2 + i)))
		{
			while ((*((const char *)s1 + i)) != 0 && (*((const char *)s1 + i))
				== (*((const char *)s2 + i)) && i < n)
				i++;
		}
		else if ((*((const char *)s1 + i)) - (*((const char *)s2 + i)) < 0)
			return (-1);
		else if ((*((const char *)s1 + i)) - (*((const char *)
					s2 + i)) > 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
