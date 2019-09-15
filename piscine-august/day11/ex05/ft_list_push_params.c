/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:17:45 by sapril            #+#    #+#             */
/*   Updated: 2019/08/14 23:17:46 by sapril           ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	i = 0;
	if (ac <= 0)
		return (NULL);
	temp = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = temp;
		temp = list;
		i++;
	}
	return (list);
}
