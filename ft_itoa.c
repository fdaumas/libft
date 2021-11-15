/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:16:05 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/15 18:06:40 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		tmp[12];
	char		*new;
	long long	nb;
	int			unit;
	int			index;

	index = 0;
	if (n < 0)
	{
		nb = n * -1;
		tmp[index++] = '-';
	}
	while (n / 10 > 0)
	{
		unit = n % 10;
		n = n / 10;
		tmp[index] = unit;
		index++;
	}
	tmp[index] = '\0';
	new = malloc (sizeof(char) * ft_strlen(tmp) + 1);
	if (!new)
		return (NULL);
}

int main()
{
	char *test;

	test = ft_itoa(-2147483648);
	printf("%s\n", test);
	free(test);
}
