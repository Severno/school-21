/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 08:28:36 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 09:41:10 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/solver.h"

int solve_map(t_tetra_el *begin_tetra, char **map)
{

}

int solve(t_tetra_el *begin_tetra)
{

}

int check_bound(t_tetra_el *tetra, int map_size, char axis)
{
	int i;

	i = 0;
	if (axis == 'x')
	{
		while (i < 4)
		{
			if (tetra->figure->x[i] + tetra->x_offset >= map_size)
				return (0);
			i++;
		}
	}
	else if (axis == 'y')
	{
		while (i < 4)
		{
			if (tetra->figure->x[i] + tetra->x_offset >= map_size)
				return (0);
			i++;
		}
	}
	return (1);
}

int count_figures(t_tetra_el *begin_tetra)
{
	int counter;
	t_tetra_el *tmp;

	counter = 0;
	tmp = begin_tetra;
	while (tmp)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}

int get_map_size(int count_figures)
{
	int map_size;

	map_size = 2;
	while ((map_size * map_size) < count_figures * 4)
		map_size++;
	return (map_size);
}