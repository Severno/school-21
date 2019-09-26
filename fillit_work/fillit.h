#ifndef FILLIT_WORK_FILLIT_H
#define FILLIT_WORK_FILLIT_H

#include "../libft/libft.h"
#include "gnl/get_next_line.h"
#include "tetramino.h"
#include <fcntl.h>

# define BUFF_SIZE 21

//t_tetra *read_tetra(int fd, char *s)
void		*read_tetra(int fd, t_tetra *tetras);
t_tetra_cor	*tetra_sign_creator(int x, int y, char sign);
t_tetra		*create_tetra();

#endif
