#include "fillit.h"

void print_tetra_elements(t_tetra_el *tetra_el)
{
	t_tetra_el *ptr;

	ptr = tetra_el;
	while (ptr != NULL)
	{
		int i;

		i = 0;
		while(i < CHARS_NUMBER)
		{
			printf("Tetramino sign number: %d\n", i);
			printf("sign = %c\n", ptr->figure->sign);
			printf("x = %d\n", ptr->figure->x[i]);
			printf("y = %d\n", ptr->figure->y[i]);
			i++;
		}
		ptr = ptr->next;
		printf("\n");
		printf("\n");
		printf("\n");
	}
}

int main()
{
	t_tetra_info *tetra_info;
	t_tetra_info *tetra_info1;
	t_tetra_info *tetra_info2;
	t_tetra_info *tetra_info3;

	t_tetra_el *tetra_el;
	t_tetra_el *tetra_el1;
	t_tetra_el *tetra_el2;
	t_tetra_el *tetra_el3;

	int *x;
	int *y;
	char sign;

	int *x1;
	int *y1;
	char sign1;

	int *x2;
	int *y2;
	char sign2;

	int *x3;
	int *y3;
	char sign3;

	x = malloc(sizeof(int) * 4);
	y = malloc(sizeof(int) * 4);

	x1 = malloc(sizeof(int) * 4);
	y1 = malloc(sizeof(int) * 4);

	x2 = malloc(sizeof(int) * 4);
	y2 = malloc(sizeof(int) * 4);

	x3 = malloc(sizeof(int) * 4);
	y3 = malloc(sizeof(int) * 4);
	for (int i = 0; i < 4; ++i)
	{
		x[i] = i+1;
		y[i] = i+2;

		x1[i] = i+10;
		y1[i] = i+20;

		x2[i] = i*2;
		y2[i] = i*11;

		x3[i] = i*44;
		y3[i] = i*23;
	}
	sign = 'A';
	sign1 = 'B';
	sign2 = 'C';
	sign3 = 'D';

	tetra_info = create_tetra_info(x,y,sign);
	tetra_el = create_tetra_el(tetra_info);

	tetra_info1 = create_tetra_info(x1,y1,sign1);
	tetra_el1 = create_tetra_el(tetra_info1);

	tetra_info2 = create_tetra_info(x2,y2,sign2);
	tetra_el2 = create_tetra_el(tetra_info1);

	tetra_info3 = create_tetra_info(x3,y3,sign3);
	tetra_el3 = create_tetra_el(tetra_info1);

	add_back_tetra_el(tetra_el, tetra_info1);
	add_back_tetra_el(tetra_el, tetra_info2);
	add_back_tetra_el(tetra_el, tetra_info3);

	print_tetra_elements(tetra_el);
	free_tetra_el(tetra_el);

	return 0;
}

