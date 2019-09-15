#include <stdio.h>

int		ft_is_prime(int sb);
int		main()
{
    int a;
    a = 5;
   printf("%d\n", ft_is_prime(-2));
    printf("%d\n", ft_is_prime(-1));
    printf("%d\n", ft_is_prime(0));
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(3));
    printf("%d\n", ft_is_prime(4));
    printf("%d\n", ft_is_prime(5));
    printf("%d\n", ft_is_prime(6));
    printf("%d\n", ft_is_prime(7));
    printf("%d\n", ft_is_prime(8));
    printf("%d\n", ft_is_prime(9));
    printf("%d\n", ft_is_prime(11));
    printf("%d\n", ft_is_prime(12));
    printf("%d\n", ft_is_prime(13));
    printf("%d\n", ft_is_prime(14));
    printf("%d\n", ft_is_prime(15));
    printf("%d\n", ft_is_prime(16));
    printf("%d\n", ft_is_prime(17));
    printf("%d\n", ft_is_prime(2147483647));
	return (0);
}

int		ft_is_prime(int nb)
{
	int isPrime;
	int i;

	i = 1;
	isPrime = 0;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			isPrime++;
		}
		if (isPrime > 2)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}
