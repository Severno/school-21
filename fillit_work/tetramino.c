/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetramino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 13:35:20 by sapril            #+#    #+#             */
/*   Updated: 2019/09/29 15:10:43 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetramino.h"

// ADD
void add_back_tetra_el(t_tetra_el *begin_tetra_list, t_tetra_info *tetra_info)
{
	t_tetra_el *ptr;

	ptr = begin_tetra_list;
	if (begin_tetra_list == NULL)
		begin_tetra_list = create_tetra_el(tetra_info);
	else
	{
		while (ptr != NULL)
		{
			if (ptr->next == NULL)
			{
				ptr->next = create_tetra_el(tetra_info);
				return;
			}
			ptr = ptr->next;
		}
	}
}
// DELETE
// SEARCH
// CREATE COORDINATE
t_tetra_info	*create_tetra_info(int *x, int *y, char sign)
{

	t_tetra_info *new_tetra_info;

	if (!(new_tetra_info = (t_tetra_info*)malloc(
			sizeof(new_tetra_info) +
			sizeof(x) +
			sizeof(y) +
			sizeof(sign))))
		return (NULL);
	new_tetra_info->x = x;
	new_tetra_info->y = y;
	new_tetra_info->sign = sign;
	return (new_tetra_info);
}

// CREATE TETRANAMINO ELEMENT

t_tetra_el		*create_tetra_el(t_tetra_info *tetra_info)
{
	t_tetra_el *new_tetra_el;

	if (!(new_tetra_el = (t_tetra_el*)malloc(
			sizeof(new_tetra_el) +
			sizeof(tetra_info->y) +
			sizeof(tetra_info->x) +
			sizeof(tetra_info->sign))))
		return (NULL);

	new_tetra_el->figure = tetra_info;
	new_tetra_el->next = NULL;
	return (new_tetra_el);
}

void free_tetra_el(t_tetra_el *tetra_el)
{
	t_tetra_el *ptr;

	while(tetra_el != NULL)
	{
		ptr = tetra_el;
		tetra_el = tetra_el->next;
		free(ptr->figure->x);
		free(ptr->figure->y);
		free(ptr->figure);
		free(ptr);
	}
}