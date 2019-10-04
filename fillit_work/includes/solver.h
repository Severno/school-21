#ifndef FILLIT_WORK_SOLVER_H
#define FILLIT_WORK_SOLVER_H


#include "tetramino.h"

int get_map_size(int count_figures);
int count_figures(t_tetra_el *begin_tetra);
int check_bound(t_tetra_el *tetra, int map_size, char axis);
void solve(t_tetra_el *begin_tetra);
int solve_map(t_tetra_el *begin_tetra, char **map, int map_size);
int is_overlay(char **map, t_tetra_el *tetra);
void place_figure(char **map, t_tetra_el *tetra, char sign);

#endif //FILLIT_WORK_SOLVER_H
