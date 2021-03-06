/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:26:17 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 12:13:35 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*mapi;

	if (!s || !f)
		return (NULL);
	index = 0;
	mapi = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!mapi)
		return (NULL);
	while (s[index])
	{
		mapi[index] = f(index, s[index]);
		index++;
	}
	mapi[index] = '\0';
	return (mapi);
}
