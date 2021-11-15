/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:15:52 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/10 14:49:29 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (dest == 0 && src == 0)
		return (dest);
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((const unsigned char *)src)[index];
		index++;
	}
	return (dest);
}
