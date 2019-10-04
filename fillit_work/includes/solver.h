#ifndef SOLVER_H
#define SOLVER_H


#include "tetramino.h"

void	place_figure(char **map, t_tetra_el *tetra, char sign);
int solve(t_tetra_el *begin_tetra);
int		solve_map(t_tetra_el *begin_tetra, char **map, int map_size);
int		check_bound(t_tetra_el *tetra, int map_size, char axis);
int		is_overlay(char **map, t_tetra_el *tetra);

#endif
