/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:06:44 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/19 16:15:29 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		index;
	t_list	*tmp;

	if (!lst)
		return (0);
	index = 0;
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		index++;
	}
	index++;
	return (index);
}
