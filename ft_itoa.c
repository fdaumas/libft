/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:16:05 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/16 20:41:24 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	index;

	index = 0 ;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*reverse(char *tmp)
{
	size_t		index;
	char	*new;

	printf("%s", tmp);
	new = malloc (sizeof(char) * ft_strlen(tmp) + 1);
	if (!new)
		return (NULL);
		while (ft_strlen(tmp) - index > ft_strlen(tmp) / 2)
	{
		tmp[index] = tmp[ft_strlen(tmp) - index - 1];
		printf("_______\ntmp : %s\n", tmp);
		index++;
	}
	return (new);
}

char	*ft_itoa(int n)
{
	char		tmp[12];
	char		*new;
	long long	nb;
	int			unit;
	size_t		index;

	index = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		tmp[index++] = '-';
	}
	while (nb / 10 > 0)
	{
		unit = nb % 10;
		nb = nb / 10;
		tmp[index++] = unit + '0';
	}
	tmp[index++] = unit * 2 + '0';
	tmp[index] = '\0';
	printf("tmp : %s\n", tmp);
	new = reverse(tmp);
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
