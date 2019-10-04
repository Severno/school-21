/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:49 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 15:12:26 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**create_map(int map_size)
{
	int		i;
	char	**map;

	i = 0;
	map = (char **)ft_memalloc(sizeof(char *) * map_size);
	while (i <= map_size)
	{
		map[i] = ft_strnew(map_size);
		ft_memset(map[i++], '.', map_size);
	}
	return (map);
}

int			get_map_size(int count_figures)
{
	int		map_size;

	map_size = 2;
	while ((map_size * map_size) < count_figures * 4)
		map_size++;
	return (map_size);
}

void		print_map(char **map, int size)
{
	int		i;

	i = 0;
	while (i <= size)
	{
		ft_putstr(map[i++]);
		ft_putchar('\n');
	}
}

void		free_map(char **map, int map_size)
{
	int i;

	i = 0;
	while (i < map_size)
		ft_strdel(&map[i++]);
	free(map);
}
