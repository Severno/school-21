/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:49 by sapril            #+#    #+#             */
/*   Updated: 2019/10/01 21:15:55 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

char **fill_map(char **map, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
				map[i][j++] = '.';
		map[i][j] = '\n';
		j = 0;
		i++;
	}
	return (map);
}

char **create_map(int size)
{
	int i;
	char **map;

	i = -1;
	map = (char **)malloc(sizeof(char *) * size);
	while (++i < size)
		map[i] = (char *)malloc(sizeof(char) * size+1);
	map = fill_map(map, size);
	return (map);
}

void place_figure(char **map, t_tetra_el *begin_tetra, int size)
{
	int i;
	int j;
	int x_counter;

	i = 0;
	j = 0;
	x_counter = 0;
	while (i < size)
	{
		while(j < size)
		{
			if (begin_tetra->figure->x[x_counter] == j)
			{
				map[i][j] = begin_tetra->figure->sign;
				x_counter++;
			}
			j++;
		}
		if (x_counter == CHARS_NUMBER)
			break;
		j = 0;
		i++;
	}
}

//void push_to_start(t_tetra_el *begin_tetra)
//{
//	while (begin_tetra != NULL)
//	{
//		if (begin_tetra->figure->y[0] != 0)
//		{
//		}
//		begin_tetra = begin_tetra->next;
//	}
//}