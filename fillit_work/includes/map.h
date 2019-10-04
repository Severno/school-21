/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:41 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 10:43:02 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_WORK_MAP_H
#define FILLIT_WORK_MAP_H

#include "tetramino.h"
#include <unistd.h>

char **create_map(int size);
void push_figure_start(t_tetra_el *tetra);
void print_map(char **map, int size);
void free_map(char **map, int map_size);

#endif //FILLIT_WORK_MAP_H
