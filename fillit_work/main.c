#include "fillit.h"

int main()
{
	t_tetra *el1;
	int fd;
	int i;
	int j;
	int q;
	int x_fill;
	int y_fill;
	char *s[10000];

	i = 0;
	x_fill =	0;
	j = 0;
	q =	0;
	y_fill =	0;
	*s = (char *)malloc(sizeof(char) * 100);
	fd = open("../test.txt", O_RDONLY);
	el1 = create_tetra();
//	while (get_next_line(fd, &s[q]))
//	{
////		printf("%s\n", s[q]);
//		while (s[q][j] != '\0')
//		{
//			if (s[q][j+1] == '\n' && (s[q][j-1] == '.'|| s[q][j-1] == '#'))
//				break;
//			if (s[q][j] == '#')
//			{
//				el1->el[i] = tetra_sign_creator(j, y_fill, 'a');
////				printf("x = %d\n", el1->el[i]->x);
////				printf("y = %d\n", el1->el[i]->y);
////				printf("sign = %c\n", el1->el[i]->sign);
//				i++;
//				y_fill++;
//			}
//			j++;
//		}
//		y_fill = 0;
//		j = 0;
//		q++;
//	}
//	close(fd);
	fd = open("../test.txt", O_RDONLY);
	read_tetra(fd, el1);
//	i = 0;
//	q = 0;
//	close(fd);
//	while(s[q] != NULL)
//	{
//		if (q % 4 == 0
//		{}
//		printf("Element numbir is %s\n", s[q++]);
//		printf("x = %d ", el1->el[i]->x);
//		printf("y = %d ", el1->el[i]->y);
//		printf("sign = %c ", el1->el[i++]->sign);
//		printf("\n" );
//	}

	return 0;
}