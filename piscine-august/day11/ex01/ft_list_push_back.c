/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:10:17 by sapril            #+#    #+#             */
/*   Updated: 2019/08/14 23:10:18 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *s;

	s = (t_list*)malloc(sizeof(t_list));
	s->data = data;
	s->next = NULL;
	return (s);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		temp = *begin_list;
		while (temp->next)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
}
