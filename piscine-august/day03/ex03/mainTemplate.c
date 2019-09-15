#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c);
//void funcName(void);
int		main()
{
//	funcName();
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
}
