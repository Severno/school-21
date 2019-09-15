/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:19:17 by sapril            #+#    #+#             */
/*   Updated: 2019/08/14 23:19:18 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *free_list;

	while (*begin_list)
	{
		free_list = *begin_list;
		*begin_list = (*begin_list)->next;
		free(free_list);
	}
	*begin_list = NULL;
}
