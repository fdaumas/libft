/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:49:36 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 20:56:58 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

static int	nb_char(char const *s1, char const *set)
{
	int	index;
	int	nb;

	index = 0;
	nb = 0;
	while (s1[index] && is_set(s1[index], set) == 1)
		index++;
	while (s1[index])
	{
		nb++;
		index++;
	}
	index--;
	while (s1[index] && is_set(s1[index], set) == 1)
	{
		index--;
		nb--;
	}
	return (nb);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		nb_c;

	if (!s1)
		return (0);
	index = 0;
	nb_c = nb_char(s1, set);
	while (s1[index] && is_set(s1[index], set) == 1)
		index++;
	return (ft_substr(s1, index, nb_c));
}
