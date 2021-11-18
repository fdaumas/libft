/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:16:05 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/18 22:43:57 by fdaumas          ###   ########.fr       */
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
	printf("%zu\n", index);
	return (index);
}

void	reverse(char *new)
{
	char	tmp;
	int		len;
	size_t	index;

	len = ft_strlen(new);
	index = 0;
	while (index * 2 < len)
	{
		tmp = new[index];
		new[index] = new[len - 1 - index];
		printf("%c\n", new[index]);
		new[len - index] = tmp;
		index++;
	}
}

char	*ft_itoa(int n)
{
	char		*new;
	long long	nb;
	size_t		index;

	new = malloc(sizeof(char) * 12);
	index = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		index = nbr(&new[1], nb);
		index++;
		new[0] = '-';
	}
	else
		index = nbr(new, nb);
	index++;
	new[index] = '\0';
	printf("tmp : %s\n", new);
	reverse(&new[1]);
	return (new);
}

int main()
{
	char *test;

	test = ft_itoa(-2147483648);
	printf("%s\n", test);
	free(test);
	printf("hello world\n");
}
