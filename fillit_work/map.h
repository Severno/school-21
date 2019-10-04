/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:41 by sapril            #+#    #+#             */
/*   Updated: 2019/10/01 20:33:14 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_WORK_MAP_H
#define FILLIT_WORK_MAP_H

#include "tetramino.h"
#include <unistd.h>

char **fill_map(char **map, int size);
char **create_map(int size);
void place_figure(char **map, t_tetra_el *begin_tetra, int size);

#endif //FILLIT_WORK_MAP_H
