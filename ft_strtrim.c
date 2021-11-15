/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:49:36 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/15 13:37:29 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const c, char const *set)
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

int	nb_char(char const *s1, char const *set)
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
	char	*trim;
	int		index;
	int		nb_c;
	int		index_trim;

	index_trim = 0;
	index = 0;
	nb_c = nb_char(s1, set);
	if (nb_c <= 0)
	{
		trim = malloc(sizeof(char));
		if (!trim)
			return (0);
		trim[0] = '\0';
		return (trim);
	}
	trim = malloc(sizeof(char) * nb_c + 1);
	if (!trim)
		return (0);
	while (s1[index] && is_set(s1[index], set) == 1)
		index++;
	while (index_trim <= nb_c)
		trim[index_trim++] = s1[index++];
	trim[nb_c] = '\0';
	return (trim);
}
