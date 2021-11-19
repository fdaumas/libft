/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:28:35 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 15:50:06 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_all(int i, char **tab)
{
	int	index;

	index = 0;
	while (index < i)
		free(tab[index++]);
	free(tab);
	return (NULL);
}

char	*ft_strdupmod(char const *src, char c, int depart)
{
	int		index;
	char	*dup;

	index = 0;
	while ((src[index + depart] != c && src[index + depart]))
		index++;
	dup = malloc(sizeof(char) * (index + 1));
	if (dup == NULL)
		return (NULL);
	index = 0;
	while (src[index + depart] != c && src[index + depart])
	{
		dup[index] = src[index + depart];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}

int	word_count(char const *str, char c)
{
	int	index;
	int	cpt;
	int	start_word;

	index = 0;
	cpt = 0;
	while (str[index])
	{
		start_word = 0;
		while (str[index] != c && str[index])
		{
			if (start_word == 0)
				cpt++;
			start_word++;
			index++;
		}
		while (str[index] == c && str[index])
			index++;
	}
	return (cpt);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		index[2];

	index[1] = 0;
	index[0] = 0;
	if (!str)
		return (0);
	tab = malloc (sizeof(char *) * (word_count(str, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (str[index[0]])
	{
		while (str[index[0]] == c && str[index[0]])
			index[0]++;
		if (!str[index[0]])
			break ;
		tab[index[1]] = ft_strdupmod(str, c, index[0]);
		if (!tab[index[1]])
			return (free_all(index[1]++, tab));
		index[1]++;
		while (str[index[0]] != c && str[index[0]])
			index[0]++;
	}
	tab[word_count(str, c)] = NULL;
	return (tab);
}
