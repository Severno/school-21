//#include "../includes/fillit.h"
//
//void print_tetra_elements(t_tetra_el *tetra_el)
//{
//	t_tetra_el *ptr;
//
//	int i;
//	ptr = tetra_el;
//	i = 0;
//	while (ptr != NULL)
//	{
//
//		while(i < CHARS_NUMBER)
//		{
//			printf("Tetramino sign number: %d\n", i);
//			printf("sign = %c\n", ptr->figure->sign);
//			printf("x = %d\n", ptr->figure->x[i]);
//			printf("y = %d\n", ptr->figure->y[i]);
//			i++;
//		}
//		i = 0;
//		ptr = ptr->next;
//		printf("\n");
//		printf("\n");
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int fd;
//	int ret;
//	char buf[BUFF_SIZE + 1];
//	int i;
//	int j;
//	char **map;
//	int size;
//
//	ret = 0;
//	i = 0;
//	j = 0;
//	t_tetra_el *begin_tetra;
//
//	begin_tetra = ((t_tetra_el *)malloc(sizeof(t_tetra_el ) * 1000));
//	fd = open("../test_tetros/test.txt", O_RDONLY);
//	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
//	{
//		buf[ret] = '\0';
//		if (check_map(buf, ret) && check_figure(buf))
//			printf("OK!");
//		else
//		{
//			printf("error");
//			return 0;
//		}
//		i++;
//	}
//	close(fd);
//	fd = open("../test_tetros/test.txt", O_RDONLY);
//	read_input(fd, buf, begin_tetra);
//	size = count_figures(begin_tetra);
//	map = create_map(get_map_size(size));
//	solve(begin_tetra->next);
//	return 0;
//}
//
