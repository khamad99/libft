/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:09:35 by kalshaer          #+#    #+#             */
/*   Updated: 2022/07/24 09:11:54 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	r = (char *) malloc((sizeof(char) * len) + 1);
	i = 0;
	if (!s || !r)
		return (0);
	while (start < ft_strlen((char *) s) && s[start + i] && i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = 0;
	return (r);
}
