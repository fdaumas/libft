/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:20:31 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 20:54:30 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			return (&((char *)s)[index]);
		index++;
	}
	if (c == '\0')
		return (&((char *)s)[index]);
	return (NULL);
}
