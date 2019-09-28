#include "fillit.h"

t_tetra		*create_tetra()
{
	t_tetra	*new_tetra;

	if (!(new_tetra = (t_tetra *)malloc(sizeof(t_tetra))))
		exit(0);

	new_tetra->next = NULL;
	return (new_tetra);
}

void		*push_back_tetra(t_tetra **begin_list)
{
	t_tetra	*temp;

	if (*begin_list == NULL)
		*begin_list = create_tetra();
	else
	{
		temp  = *begin_list;
		while (temp->next)
			temp = temp->next;
		temp->next = create_tetra();
	}
}

void		push_front_tetra(t_tetra ** begin_list)
{
	t_tetra	*temp;

	if (*begin_list == NULL)
		*begin_list = create_tetra();
	else
	{
		temp = create_tetra();
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

void	list_clear(t_tetra **begin_list)
{
	t_tetra *free_list;

	while (*begin_list)
	{
		free_list = *begin_list;
		*begin_list = (*begin_list)->next;
		free(free_list);
	}
	*begin_list = NULL;
}