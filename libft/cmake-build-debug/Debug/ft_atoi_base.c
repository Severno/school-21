int	ft_atoi_base(const char *nbr, unsigned int base)
{
	unsigned int i;
	int sum;
	int sign;
	if (base > 16 || nbr == 0)
		return (0);
	i = 0;
	sign = 1;
	sum = 0;
	while ((nbr[i] >= '\t' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -1;		
		i++;
	}
	while ((nbr[i] >= '0' && nbr[i] <= '9') || (nbr[i] >= 'a' && nbr[i] <= 'f') || (nbr[i] >= 'A' && nbr[i] <= 'F'))
	{
		if ((nbr[i] >= 'a' && nbr[i] <= 'f'))
		{
			if (nbr[i] + 10 - 97 >= (int)base)
				return (sum);
			else
				sum = (int)base * sum + (nbr[i] + 10 - 97);
		}
		else if ((nbr[i] >= 'A' && nbr[i] <= 'F'))
		{
			if (nbr[i] + 10 - 65 >= (int)base)
				return (sum);
			else
				sum = (int)base * sum + (nbr[i] + 10 - 65);
		}
		else 
		{
			if ((nbr[i] - '0' >= (int)base))
				return (sum);
			else
				sum = (int)base * sum + (nbr[i] - '0');
		}
		i++;
	}
	return (sum * sign);
}

