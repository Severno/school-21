#include "fillit.h"

t_tetra		**create_tetra(int tetros_num)
{
	t_tetra	**new_tetra;

	if (!(new_tetra = (t_tetra **)malloc(sizeof(t_tetra*) * tetros_num)))
		exit(0);
	while (tetros_num--)
	{
		if ((*new_tetra = (t_tetra *)malloc(sizeof(t_tetra))))
			return (NULL);
		(*new_tetra)->next = NULL;
	}
	return (new_tetra);
}

void		*push_back_tetra(t_tetra **begin_list, char *str)
{
	t_tetra	*temp;

	if (*begin_list == NULL)
		*begin_list = create_tetra(str);
	else
	{
		temp  = *begin_list;
		while (temp->next)
			temp = temp->next;
		temp->next = create_tetra(str);
	}
}

void		push_front_tetra(t_tetra ** begin_list, char *str)
{
	t_tetra	*temp;

	if (*begin_list == NULL)
		*begin_list = create_tetra(str);
	else
	{
		temp = create_tetra(str);
		temp->next = *begin_list;
		*begin_list = temp;
	}
}

t_tetra_cor		*create_tetra_pos(int x, int y, char sign)
{
	t_tetra_cor *new_cor;

	if (!(new_cor = (t_tetra_cor*)malloc(sizeof(t_tetra_cor))))
		return NULL;
	new_cor->x = x;
	new_cor->y = y;
	new_cor->sign = sign;

	return (new_cor);
}
