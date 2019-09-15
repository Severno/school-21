#include <stdio.h>

int    ft_sqrt(int nb);
int		main()
{
    int a;
    a = 5;
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(4));
    printf("%d\n", ft_sqrt(16));
    printf("%d\n", ft_sqrt(-32));
    printf("%d\n", ft_sqrt(36));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(2147483647));
	return (0);
}

int    ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 0;
	sqrt = i * i;
	while (sqrt <= nb && nb >= 0)
	{
		if (sqrt == nb)
		{
			return (i);
		}
		else if (sqrt > nb)
		{
			return (0);
		}
		i++;
		sqrt = i * i;
	}
	return (0);
}
