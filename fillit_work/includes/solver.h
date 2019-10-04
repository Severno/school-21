#ifndef FILLIT_WORK_SOLVER_H
#define FILLIT_WORK_SOLVER_H


#include "tetramino.h"

int get_map_size(int count_figures);
int count_figures(t_tetra_el *begin_tetra);
int check_bound(t_tetra_el *tetra, int map_size, char axis);
int solve(t_tetra_el *begin_tetra);
int solve_map(t_tetra_el *begin_tetra, char **map);

#endif //FILLIT_WORK_SOLVER_H
