/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:49 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 10:00:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map.h"
#include "../../libft/libft.h"
#include "../includes/solver.h"

char **create_map(int size)
{
	int i;
	char **map;

	i = -1;
	map = (char **)ft_memalloc(sizeof(char *) * size);
	while (++i < size)
	{
		map[i] = ft_strnew(size);
		ft_memset(map[i], '.', size);
	}
	return (map);
}

void place_figure(char **map, t_tetra_el *begin_tetra, int size)
{

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
	while (i < size)
	{
		ft_putstr(map[i++]);
		ft_putchar('\n');
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