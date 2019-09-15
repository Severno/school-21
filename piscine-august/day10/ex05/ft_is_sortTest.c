#include <stdlib.h>
#include <stdio.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));
int ft_sort_test(int a, int b);

int main(int argc, char const *argv[])
{
	int *tab;

	tab = malloc(sizeof(int) * 10);

	tab[0] = 0;


	tab[0] = -4;
	tab[1] = -1;
	tab[2] = 1;
	tab[3] = 2;
	tab[4] = 1;

	printf("%d", ft_is_sort(tab, 3, ft_sort_test));
	return 0;
}
// Working func
int ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

// test
int ft_sort_test(int a, int b)
{
	if (a < b)
	{
		return a - b;
	}
	else if (a == b)
		return 0;
	else
		return a - b;
}

int ft_sort_check(int length, int a, int b)
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if ((a - b))
		{
			return (0);
		}
		i++;
	}
	return (1);
}