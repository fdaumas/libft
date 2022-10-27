/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:14:46 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/15 14:47:23 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	size_t	meter;

	if (!s)
		return (NULL);
	index = 0;
	meter = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			meter = index;
		index++;
	}
	if (c == '\0')
		return (&((char *)s)[index]);
	if (meter != 0 || s[meter] == (char)c)
		return (&((char *)s)[meter]);
	return (NULL);
}
