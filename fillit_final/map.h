/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:40:41 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 14:36:58 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "tetramino.h"
# include <unistd.h>

char	**create_map(int size);
void	print_map(char **map, int size);
void	free_map(char **map, int map_size);
int		get_map_size(int count_figures, t_max *max_w_h);

#endif
