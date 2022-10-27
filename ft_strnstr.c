/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:24:41 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/09 20:48:54 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	index1;

	if (!haystack || !needle)
		return (NULL);
	index = 0;
	index1 = 0;
	if (needle[0] == '\0')
		return (((char *)haystack));
	while (haystack[index] != '\0' && index < len)
	{
		if (haystack[index] == needle[index1])
		{
			while (haystack[index + index1] == needle[index1])
			{
				if (needle[index1 + 1] == '\0' && index + index1 < len)
					return (&((char *)haystack)[index]);
				index1++;
			}
			index1 = 0;
		}
		index++;
	}
	return ((void *)0);
}
