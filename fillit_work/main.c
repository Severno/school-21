#include "fillit.h"

void print_tetra_elements(t_tetra_el *tetra_el)
{
	t_tetra_el *ptr;

	int i;
	ptr = tetra_el;
	i = 0;
	while (ptr != NULL)
	{

		while(i < CHARS_NUMBER)
		{
			printf("Tetramino sign number: %d\n", i);
			printf("sign = %c\n", ptr->figure->sign);
			printf("x = %d\n", ptr->figure->x[i]);
			printf("y = %d\n", ptr->figure->y[i]);
			i++;
		}
		i = 0;
//		print_map(ptr);
		ptr = ptr->next;
		printf("\n");
		printf("\n");
		printf("\n");
	}
}

void print_map_main(char **map, int size)
{
	int i;
	int j;

	i =0;
	j =0;
	while (i < size+1)
	{
		while (j < size+1)
		{
			write(1, &map[i][j],1);
			j++;
		}
		j =0;
		i++;
	}
}

int main()
{
//	t_tetra_info *tetra_info;
//	t_tetra_info *tetra_info1;
//	t_tetra_info *tetra_info2;
//	t_tetra_info *tetra_info3;
//
//	t_tetra_el *tetra_el;
//	t_tetra_el *tetra_el1;
//	t_tetra_el *tetra_el2;
//	t_tetra_el *tetra_el3;
//
//	int *x;
//	int *y;
//	char sign;
//
//	int *x1;
//	int *y1;
//	char sign1;
//
//	int *x2;
//	int *y2;
//	char sign2;
//
//	int *x3;
//	int *y3;
//	char sign3;
//
//	x = malloc(sizeof(int) * 4);
//	y = malloc(sizeof(int) * 4);
//
//	x1 = malloc(sizeof(int) * 4);
//	y1 = malloc(sizeof(int) * 4);
//
//	x2 = malloc(sizeof(int) * 4);
//	y2 = malloc(sizeof(int) * 4);
//
//	x3 = malloc(sizeof(int) * 4);
//	y3 = malloc(sizeof(int) * 4);
//	for (int i = 0; i < 4; ++i)
//	{
//		x[i] = i+1;
//		y[i] = i+2;
//
//		x1[i] = i+10;
//		y1[i] = i+20;
//
//		x2[i] = i*2;
//		y2[i] = i*11;
//
//		x3[i] = i*44;
//		y3[i] = i*23;
//	}
//	sign = 'A';
//	sign1 = 'B';
//	sign2 = 'C';
//	sign3 = 'D';
//
//	tetra_info = create_tetra_info(x,y,sign);
//	tetra_el = create_tetra_el(tetra_info);
//
//	tetra_info1 = create_tetra_info(x1,y1,sign1);
//	tetra_el1 = create_tetra_el(tetra_info1);
//
//	tetra_info2 = create_tetra_info(x2,y2,sign2);
//	tetra_el2 = create_tetra_el(tetra_info1);
//
//	tetra_info3 = create_tetra_info(x3,y3,sign3);
//	tetra_el3 = create_tetra_el(tetra_info1);
//
//	add_back_tetra_el(tetra_el, tetra_info1);
//	add_back_tetra_el(tetra_el, tetra_info2);
//	add_back_tetra_el(tetra_el, tetra_info3);
//
//	print_tetra_elements(tetra_el);
//	free_tetra_el(tetra_el);

	int fd;
	int ret;
	char buf[BUFF_SIZE + 1];
	int i;
	int j;
	char **map;
	int size;

	ret = 0;
	i = 0;
	j = 0;
	size = 5;
	t_tetra_el *begin_tetra;

	begin_tetra = ((t_tetra_el *)malloc(sizeof(t_tetra_el ) * 1000));
	fd = open("../test.txt", O_RDONLY);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (check_map(buf, ret) && check_figure(buf))
			printf("OK!");
		else
		{
			printf("error");
			return 0;
		}
		i++;
	}
	close(fd);
	fd = open("../test.txt", O_RDONLY);
	read_input(fd, buf, begin_tetra);
	map = create_map(size);
	print_map_main(map, size);
	place_figure(map, begin_tetra->next, size);
	print_map_main(map, size);

//	print_tetra_elements(begin_tetra->next);
	return 0;
}

