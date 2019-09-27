
#ifndef FILLIT_WORK_MAP_H
#define FILLIT_WORK_MAP_H

void			*push_back_tetra(t_tetra **begin_list, char *str);
void			push_front_tetra(t_tetra ** begin_list, char *str);
t_tetra		**create_tetra();
t_tetra_cor		*create_tetra_pos(int x, int y, char sign);

#endif
