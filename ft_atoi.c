/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:58:39 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/08 17:26:22 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	index;

	sign = 1;
	result = 0;
	index = 0;
	while (nptr[index] == '\t' || nptr[index] == '\n' || nptr[index] == '\v'
		|| nptr[index] == '\f' || nptr[index] == '\r' || nptr[index] == ' ')
		index++;
	if (nptr[index] == '-')
	{
		sign = sign * (-1);
		index++;
	}
	if (nptr[index] == '+' && nptr[index - 1] != '-')
		index++;
	while (nptr[index] >= 48 && nptr[index] <= 57)
	{
		result = result * 10 + (nptr[index] - '0');
		index++;
	}
	return (result * sign);
}
