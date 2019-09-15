/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:14:17 by sapril            #+#    #+#             */
/*   Updated: 2019/08/14 23:14:17 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 0;
	while (begin_list != 0)
	{
		begin_list = begin_list->next;
		counter++;
	}
	return (counter);
}
