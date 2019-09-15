#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c);
void    fn(void);
int		main()
{
    int a;
    a = 5;
    printf("%d\n", fn(a));
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void    fn(void)
{
    
}
