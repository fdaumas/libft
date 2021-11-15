/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:41 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/08 16:37:01 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	index = 0;
	if (dstsize < len_dest || dstsize == 0)
		return (len_src + dstsize);
	while (src[index] != '\0' && index + len_dest < dstsize - 1)
	{
		dst[len_dest + index] = src[index];
		index++;
	}
	dst[len_dest + index] = '\0';
	return (len_dest + len_src);
}
