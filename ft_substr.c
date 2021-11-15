/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:23:15 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/10 16:52:40 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*ns;

	if (!s && !start)
		return (0);
	index = 0;
	while (s[start + index])
		index++;
	if (index < len)
		len = index;
	ns = malloc(sizeof(char) * len + 1);
	if (!ns)
		return (NULL);
	index = 0;
	if (start > ft_strlen(s))
		return (ns);
	while (index < len && s[start])
		ns[index++] = s[start++];
	ns[index] = '\0';
	return (ns);
}
