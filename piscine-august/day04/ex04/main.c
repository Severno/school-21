#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
int		ft_fibonacci(int index);
int		main()
{
    int a;
    a = 5;
    printf("%d\n", ft_fibonacci(1));
    printf("%d\n", ft_fibonacci(2));
    printf("%d\n", ft_fibonacci(3));
    printf("%d\n", ft_fibonacci(4));
    printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(6));
    printf("%d\n", ft_fibonacci(7));
    printf("%d\n", ft_fibonacci(8));
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(-2));
    printf("%d\n", ft_fibonacci(13));
    printf("%d\n", ft_fibonacci(2147483647));
	return (0);
}

int    ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);	
	}
	else if (index > 1)
	{
		return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	else
	{
		return (-1);
	}
}
