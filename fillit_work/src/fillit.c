#include "../includes/fillit.h"

int main(int argc, char *argv[])
{
	t_tetra_el *begin_tetra;
	t_tetra_el *result;
	char buf[BUFF_SIZE+1];

	begin_tetra = NULL;
	if (argc != 2)
	{ft_strsub.
		ft_putstr("error");
		return (1);
	}
	result = read_input(argv[1], buf, begin_tetra);
	if (result != NULL)
		if (solve(result))
			return (0);
		else
		{
			ft_putstr("error");
			return (1);
		}
	else
	{
		ft_putstr("error");
		return (1);
	}
}