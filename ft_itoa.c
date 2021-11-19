/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:16:05 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 02:30:33 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbr(char *new, long long nb)
{
	int		unit;
	size_t	index;

	while (nb / 10 > 0)
	{
		unit = nb % 10;
		nb = nb / 10;
		new[index++] = unit + '0';
	}
	new[index++] = nb + '0';
	return (index);
}

void	reverse(char *new)
{
	char	tmp;
	int		len;
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

char	*expet(char *new)
{
	new[0] = '0';
	new[1] = '\0';
	return (new);
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
	{
		nb = nb * -1;
		index = nbr(&new[1], nb);
		new[0] = '-';
	}
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

int	main(void)
{
	char	*test;

	test = ft_itoa(0);
	printf("%s\n", test);
	free(test);
}
