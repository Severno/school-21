#include "fillit.h"

//void *read_tetra(int fd, t_tetra *tetras)
//{
//	int ret;
//	char buf[BUFF_SIZE];
//	int x;
//	int el_number;
//	int y_line;
//	char sign;
//
//	x = 0;
//	y_line = 0;
//	el_number = 0;
//	sign = 'A';
//	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
//	{
//		buf[ret] = '\0';
//		while (buf[x])
//		{
//			if (buf[x] == '\n' && buf[x + 1] != '\n')
//				y_line++;
//			if (buf[x] == '#')
//			{
//				tetras->el[el_number] = create_tetra_pos(x, y_line, sign);
//			}
//
//		}
//	}
//}

void	read_tetra(int fd, t_tetra **tetras)
{
	int ret;
	char buf[BUFF_SIZE];
	int x;
	int y_line;
	char sign;
	int i;
	int tetra_num;
	t_tetra *temp;

	x = 0;
	i = 0;
	y_line = 0;
	tetra_num = 0;
	sign = 'A';

	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';

	temp = NULL;
	while (buf[i])
	{
		if (buf[i] == '\n' && (buf[i - 1] == '.' || buf[i - 1] == '#') && i != 0)
		{
			y_line++;
			x = 0;
		}
		else if (buf[i] == '\n' && (buf[i - 1] == '\n'))
		{
			y_line = 0;
			x = 0;
		}
		if (buf[i] == '#')
		{
			if ((*tetras) == NULL)
			{
				*tetras = create_tetra();
				(*tetras)->el[tetra_num] = create_tetra_pos(x, y_line, sign);
				printf("i is %d\n", i);
				printf("%d\n", (*tetras)->el[tetra_num]->x);
				printf("%d\n", (*tetras)->el[tetra_num]->y);
				printf("%c\n", (*tetras)->el[tetra_num]->sign);
				printf("\n");
				tetra_num++;
			}
			else if (tetra_num == 4)
			{
				temp = (*tetras);
				while (temp->next)
					temp = temp->next;
				temp->next = create_tetra();
				sign++;
				tetra_num = 0;
			}
			else
			{
				(*tetras)->el[tetra_num] = create_tetra_pos(x, y_line, sign);
				printf("i is %d\n", i);
				printf("%d\n", (*tetras)->el[tetra_num]->x);
				printf("%d\n", (*tetras)->el[tetra_num]->y);
				printf("%c\n", (*tetras)->el[tetra_num]->sign);
				printf("\n");
				tetra_num++;
			}
			x++;
		}
		i++;
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


// CHECK
// 1. 4 elements . or # and 5 element \n
// 2. Only one \n between two tetras
// 3. Each tetro divide by 1 tetra
// 4. Only 4 # in tetra
// 5. Check connections between tetras
//int check_valid_input(int fd)
//{
//
//}