#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);
int		ft_iterative_factorial(int nb);
int		main()
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	} 
	else if (nb > 1)
	{
		while (nb > 1)
		{
			sum *= nb;
			nb -= 1;
		}
		return sum;
	}
	else
	{
		return (0);
	}
	return (0);
}
