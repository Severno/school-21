/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:49 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 11:31:41 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map.h"
#include "../../libft/libft.h"
#include "../includes/solver.h"

char **create_map(int map_size)
{
	int i;
	char **map;

	i = 0;
	map = (char **)ft_memalloc(sizeof(char *) * map_size + 1);
	while (i < map_size + 1)
	{
		map[i] = ft_strnew(map_size);
		ft_memset(map[i], '.', map_size);
		i++;
	}
	return (map);
}


void push_figure_start(t_tetra_el *tetra)
{
	int i;

	i = 0;
	while (tetra->figure->x[i] != 0)
		tetra->figure->x[i++]--;
	i = 0;
	while (tetra->figure->y[i] != 0)
		tetra->figure->y[i++]--;
}

void print_map(char **map, int size)
{
	int i;

	i = 0;
	while (i < size + 1)
	{
		ft_putstr(map[i++]);
		ft_putchar('\n');
	}
}

void free_map(char **map, int map_size)
{
	int i;

	i = 0;
	while (i < map_size)
		ft_strdel(&map[i++]);
	free(map);
}