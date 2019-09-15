/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:35:59 by sapril            #+#    #+#             */
/*   Updated: 2019/08/14 23:36:00 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *rem;
	t_list *cur;

	cur = *begin_list;
	while (cur != 0 && cur->next != 0)
	{
		if ((*cmp)(cur->next->data, data_ref) == 0)
		{
			rem = cur->next;
			cur->next = cur->next->next;
			free(rem);
		}
		cur = cur->next;
	}
	cur = *begin_list;
	if (cur != 0 && (*cmp)(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
	}
}
