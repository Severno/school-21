/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:20:07 by sapril            #+#    #+#             */
/*   Updated: 2019/08/14 23:20:08 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 0;
	if (begin_list == 0)
		return (0);
	else
	{
		while (begin_list != 0 && i < nbr)
		{
			if (begin_list == 0 && i != nbr)
				return (0);
			begin_list = begin_list->next;
			i++;
		}
	}
	return (begin_list);
}
