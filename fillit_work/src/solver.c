/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 08:28:36 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 11:25:39 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/solver.h"
#include "../includes/map.h"

int solve_map(t_tetra_el *begin_tetra, char **map, int map_size)
{
	if (begin_tetra == NULL)
		return (1);
	t_tetra_el *tmp;

	tmp = begin_tetra;
	tmp->y_indent = 0;
	tmp->x_indent = 0;

	while (check_bound(tmp, map_size, 'y'))
	{
		while (check_bound(tmp, map_size, 'x'))
		{
			if (!is_overlay(map, tmp))
			{
				place_figure(map, tmp, tmp->figure->sign);
				if (solve_map(tmp->next, map, map_size))
					return (1);
				else
					place_figure(map, tmp, '.');
			}
			tmp->x_indent++;
		}
		tmp->x_indent = 0;
		tmp->y_indent++;
	}
	return (0);
}

void solve(t_tetra_el *begin_tetra)
{
	char **map;
	int map_size;
	int count_figure;

	count_figure = count_figures(begin_tetra);
	map_size = get_map_size(count_figure);
	map = create_map(map_size);
	while (!solve_map(begin_tetra, map, map_size))
	{
		free_map(map, map_size);
		map_size++;
		map = create_map(map_size);
	}
	print_map(map, map_size);
	free_map(map, map_size);
}

void place_figure(char **map, t_tetra_el *tetra, char sign)
{
	int i;
	int x;
	int y;

	i = 0;
	while (i < 4)
	{
		y = tetra->figure->y[i] + tetra->y_indent;
		x = tetra->figure->x[i] + tetra->x_indent;
		map[y][x] = sign;
		i++;
	}
}

int is_overlay(char **map, t_tetra_el *tetra)
{
	int i;
	int x;
	int y;

	i = 0;
	x = tetra->figure->x[i] + tetra->x_indent;
	y = tetra->figure->y[i] + tetra->y_indent;
	while (i < CHARS_NUMBER && map[y][x] == '.')
	{
		i++;
		x = tetra->figure->x[i] + tetra->x_indent;
		y = tetra->figure->y[i] + tetra->y_indent;
	}
	return (i != 4);
}

int check_bound(t_tetra_el *tetra, int map_size, char axis)
{
	int i;

	i = 0;
	if (axis == 'x')
	{
		while (i < 4)
		{
			if (tetra->figure->x[i] + tetra->x_indent > map_size)
				return (0);
			i++;
		}
	}
	else if (axis == 'y')
	{
		while (i < 4)
		{
			if (tetra->figure->y[i] + tetra->y_indent > map_size)
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