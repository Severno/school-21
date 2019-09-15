#include <stdio.h>
#include <unistd.h>

int		ft_recursive_power(int nb, int power);
int		main()
{
    int nb,power;
    nb = -10;
	power = 0;
    printf("%d\n", ft_recursive_power(10, 1));
    printf("%d\n", ft_recursive_power(10, 0));
    printf("%d\n", ft_recursive_power(10, -1));
    printf("%d\n", ft_recursive_power(1, 1));
    printf("%d\n", ft_recursive_power(1, 0));
    printf("%d\n", ft_recursive_power(1, -1));
    printf("%d\n", ft_recursive_power(-10, -1));
	printf("%d\n", ft_recursive_power(-2, 4));
    printf("%d\n", ft_recursive_power(-2, 3));
    printf("%d\n", ft_recursive_power('0', 4));
    printf("%d\n", ft_recursive_power(2147483647, 2147483647));
	return (0);
}

int		ft_recursive_power(int nb, int power)
{
	int temp;

	temp = nb;
	if (power > 0)
	{
		return (nb * (ft_recursive_power(temp, power-1)));
	}
	else if (power  == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
