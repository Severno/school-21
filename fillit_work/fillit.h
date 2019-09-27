#ifndef FILLIT_WORK_FILLIT_H
#define FILLIT_WORK_FILLIT_H

#include "../libft/libft.h"
#include "gnl/get_next_line.h"
#include <fcntl.h>
#include "tetramino.h"
#include "map.h"

# define BUFF_SIZE 600

void	read_tetra(int fd, t_tetra *tetras[]);

#endif
