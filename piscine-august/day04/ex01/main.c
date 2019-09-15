#include <stdio.h>

int ft_recursive_factorial(int nb);
int		main(void)
{
	printf("%d", ft_recursive_factorial(12));
	return (0);
}

int     ft_iterative_factorial(int nb)
{
	if (nb == 1 || nb == 0)
			    {
					        return (1);
							    }
		    else if (nb > 1)
				    {
						        return (nb * ft_iterative_factorial(nb - 1));
								    }
			    else
					    {
							        return (0);
									    }
}
/*
int		ft_recursive_factorial(int nb)
{
	int sum;
	if (nb == 0 || nb == 1)
	{
		return 1;
	}
	else if (nb > 1) 
	{
		return nb * ft_recursive_factorial(ft_recursive_factorial(nb-1));
	}
	else
	{
		return 0;
	}
	return 0;
}*/
