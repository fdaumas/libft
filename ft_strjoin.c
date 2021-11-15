/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:50:26 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/10 16:58:42 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	char	*ns;

	if (!s1 || !s2)
		return (0);
	index = 0;
	ns = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ns)
		return (NULL);
	if (ft_strlen(s1) + ft_strlen(s2) == 0)
		ns[0] = '\0';
	while (s1[index])
	{
		ns[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		ns[index + ft_strlen(s1)] = s2[index];
		index++;
	}
	ns[index + ft_strlen(s1)] = '\0';
	return (ns);
}
