//
// Created by Sophia April on 27/09/2019.
//

#ifndef FILLIT_WORK_TETRAMINO_H
#define FILLIT_WORK_TETRAMINO_H

typedef struct	s_tetra_cor
{
	int			x;
	int			y;
	char		sign;
}				t_tetra_cor;

typedef struct	s_tetra
{
	t_tetra_cor	*el[4];
	struct s_tetra *next;
}				t_tetra;

#endif //FILLIT_WORK_TETRAMINO_H
