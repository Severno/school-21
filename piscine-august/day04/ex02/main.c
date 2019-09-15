#include <stdio.h>
#include <unistd.h>

int		ft_iterative_power(int nb, int power);
int		main()
{
    int nb,power;
    nb = -10;
	power = 0;
    printf("%d\n", ft_iterative_power(10, 1));
    printf("%d\n", ft_iterative_power(10, 0));
    printf("%d\n", ft_iterative_power(10, -1));
    printf("%d\n", ft_iterative_power(1, 1));
    printf("%d\n", ft_iterative_power(1, 0));
    printf("%d\n", ft_iterative_power(1, -1));
    printf("%d\n", ft_iterative_power(-10, -1));
	printf("%d\n", ft_iterative_power(-1, 443279));
    printf("%d\n", ft_iterative_power(-2, 3));
    printf("%d\n", ft_iterative_power('0', 4));
    printf("%d\n", ft_iterative_power(-2, 4));
    printf("%d\n", ft_iterative_power(1, 2147483647));
    printf("%d\n", ft_iterative_power(-1, 2147483647));
	return (0);
}

int		ft_iterative_power(int nb, int power)
{
	int temp;

	temp = nb;
	if (nb == 1 || nb == -1)
	{
		if (nb == -1 && power % 2 == 1)
			return (-1);
		return (1);
	}
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
	{
		while (power > 1)
		{
			nb *= temp;
			power--;
		}
	}
	return nb;
}
