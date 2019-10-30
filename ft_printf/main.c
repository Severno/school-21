#include <stdio.h>
#include "ft_printf.h"

int main()
{
	ft_printf("Hello %.20d\n", 100);
	printf("Hello %.20d\n", 100);
//	printf("%-100d", 10);
	return 0;
}