#include <stdio.h>

int		ft_find_next_prime(int sb);
int		main()
{
    int a;
    a = 5;
    printf("%d\n", ft_find_next_prime(-2));
    printf("%d\n", ft_find_next_prime(-1));
    printf("%d\n", ft_find_next_prime(0));
    printf("%d\n", ft_find_next_prime(1));
    printf("%d\n", ft_find_next_prime(2));
    printf("%d\n", ft_find_next_prime(3));
    printf("%d\n", ft_find_next_prime(4));
    printf("%d\n", ft_find_next_prime(5));
    printf("%d\n", ft_find_next_prime(6));
    printf("%d\n", ft_find_next_prime(7));
    printf("%d\n", ft_find_next_prime(8));
    printf("%d\n", ft_find_next_prime(9));
    printf("%d\n", ft_find_next_prime(11));
    printf("%d\n", ft_find_next_prime(12));
    printf("%d\n", ft_find_next_prime(13));
    printf("%d\n", ft_find_next_prime(14));
    printf("%d\n", ft_find_next_prime(15));
    printf("%d\n", ft_find_next_prime(16));
    printf("%d\n", ft_find_next_prime(17));
    printf("%d\n", ft_find_next_prime(18));
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int is_prime;
	int i;

	i = 1;
	is_prime = 0;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			is_prime++;
		}
		if (is_prime > 2)
		{
			return (0);
		}
		i++;
	}
		

	return (1);
}

int find_next(int nb, int i)
{
	int is_prime;
	is_prime = 0;
	while(nb <= i)
	{
		if (nb % i == 0)
		{
			is_prime++;
		}
		if (is_prime == 2)
		{
			return i;
		}
	}		
}
