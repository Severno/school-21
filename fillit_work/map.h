
#ifndef FILLIT_WORK_MAP_H
#define FILLIT_WORK_MAP_H

void			*push_back_tetra(t_tetra **begin_list);
void			push_front_tetra(t_tetra ** begin_list);
t_tetra		*create_tetra();
t_tetra_cor		*create_tetra_pos(int x, int y, char sign);
void	list_clear(t_tetra **begin_list);

#endif
