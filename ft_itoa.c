/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:16:05 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 20:48:33 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr(char *new, long long nb)
{
	int		unit;
	size_t	index;

	index = 0;
	while (nb / 10 > 0)
	{
		unit = nb % 10;
		nb = nb / 10;
		new[index++] = unit + '0';
	}
	new[index++] = nb + '0';
	return (index);
}

static void	reverse(char *new)
{
	char	tmp;
	size_t	len;
	size_t	index;

	len = ft_strlen(new);
	index = 0;
	while (index * 2 < len - 1)
	{
		tmp = new[index];
		new[index] = new[len - 1 - index];
		new[len - 1 - index] = tmp;
		index++;
	}
}

static char	*expet(char *new)
{
	new[0] = '0';
	new[1] = '\0';
	return (new);
}

static size_t	negatif(long long nb, char *new)
{
	size_t	index;

	nb = nb * -1;
	index = nbr(&new[1], nb);
	new[0] = '-';
	index++;
	return (index);
}

char	*ft_itoa(int n)
{
	char		*new;
	long long	nb;
	size_t		index;

	new = malloc(sizeof(char) * 12);
	if (!new)
		return (NULL);
	index = 0;
	nb = n;
	if (n < 0)
		index = negatif(nb, new);
	else if (nb == 0)
		return (expet(new));
	else
		index = nbr(new, nb);
	new[index] = '\0';
	if (n < 0)
		reverse(&new[1]);
	else
		reverse(new);
	return (new);
}
