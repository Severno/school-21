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
#include "../libft/libft.h"

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
	int finish;
	int x_counter;
	int el_counter;
	int move_to;
	t_tetra_el *tmp;
	t_tetra_el *first_position;

	i = 0;
	finish = 0;
	j = 0;
	x_counter = 0;
	el_counter = 0;
	tmp = begin_tetra;
	first_position = begin_tetra;
	while (tmp != NULL && finish < 4)
	{
		while (i < size)
		{
			while(j < size)
			{
				if (tmp->figure->x[x_counter] == j && map[i][j] == '.')
				{
					map[i][j] = tmp->figure->sign;
					x_counter++;
				}
				else if (map[i][j] >= 'A' && map[i][j] <= 'Z')
				{
					if ((tmp->figure->x[3] + j) > size+1)
					{
						while (el_counter < 4)
						{
							tmp->figure->x[el_counter] = first_position->figure->x[el_counter];
							tmp->figure->y[el_counter]++;
							el_counter++;
						}
					}
					else
					{
						while (el_counter < 4)
						{
							tmp->figure->x[el_counter]++;
							el_counter++;
						}
					}
				}
				el_counter = 0;
				j++;
			}
			if (x_counter == CHARS_NUMBER)
				break;
			j = 0;
			i++;
		}
		finish++;
		x_counter = 0;
		el_counter = 0;
		i = 0;
		j = 0;
		tmp = tmp->next;
		first_position = first_position->next;
	}
}
