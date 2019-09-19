#include <stdlib.h>
char	*ft_itoa_base(int value, int base)
{
	char			*dest;
	int				power;
	unsigned int	i;
	unsigned int	temp;
	unsigned int	flag;

	i = 0;
	temp = 0;
	flag = 0;
	power = 0;
	dest = NULL;
	if (base < 2)
		return (NULL);
	if (value < 0)
	{
		temp = -1 * value;
		while(value /= base)
			power++;
		if (base == 10)
			power += 1;
		dest = (char *)malloc(power + 1);
		if (dest == NULL)
			return (NULL);
		flag = 1;
	}
	else
	{

		temp = value;
		while(value /= base)
			power++;
		dest = (char *)malloc((power + 1));
		if (dest == NULL)
			return (NULL);
	}
	i = power;
	while (power >= 0)
	{
		if (power == 0 && flag == 1 && base == 10)
		{
			dest[power] = '-';
			dest[i + 1] = '\0';
			return (dest);	
		}
		if (temp % base == 10)
			dest[power] = 'A';
		else if (temp % base == 11)
			dest[power] = 'B';
		else if (temp % base == 12)
			dest[power] = 'C';
		else if (temp % base == 13)
			dest[power] = 'D';
		else if (temp % base == 14)
			dest[power] = 'E';
		else if (temp % base == 15)
			dest[power] = 'F';
		else
			dest[power] = (temp % base) + 48;
		temp /= base;
		power--;
	}
	dest[i + 1] = '\0';
	return (dest);
}

