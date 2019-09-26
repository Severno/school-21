#include "fillit.h"

void *read_tetra(int fd, t_tetra *tetras)
{
	int ret;
	char buf[BUFF_SIZE];

	int i;
	int j;

	i = 0;
	j = 0;
	while ((ret = read(fd, buf, BUFF_SIZE) > 0))
	{
		buf[ret] = '\0';
		tetras->tetra_fig[i] = ft_strdup(buf);
		printf("%s\n", tetras->tetra_fig[i]);
	}
	while (j < i)
	{
		printf("%s\n", tetras->tetra_fig[i]);
		j++;
	}
}




// Use x, y and sign coordinates for creating one element of the tetramino
t_tetra_cor		*tetra_sign_creator(int x, int y, char sign)
{
	t_tetra_cor *new_tetra_sign;
	if (!(new_tetra_sign = (t_tetra_cor *)malloc(sizeof(t_tetra_cor))))
		exit(0);
	new_tetra_sign->x = x;
	new_tetra_sign->y = y;
	new_tetra_sign->sign = sign;
	return (new_tetra_sign);
}

t_tetra		*create_tetra(char *str, int el_num)
{
	t_tetra *new_tetra;
	if (!(new_tetra = (t_tetra *)malloc(sizeof(t_tetra) * 4)))
		exit(0);
	new_tetra->tetra_fig[el_num] = ft_strdup(str);
	return (new_tetra);
}
// CHECK
// 1. 4 elements . or # and 5 element \n
// 2. Only one \n between two tetras
// 3. Each tetro divide by 1 tetra
// 4. Only 4 # in tetra
// 5. Check connections between tetras
int check_valid_input(int fd)
{

}