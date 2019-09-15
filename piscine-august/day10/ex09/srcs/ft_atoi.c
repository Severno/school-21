/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:57:01 by sapril            #+#    #+#             */
/*   Updated: 2019/08/05 13:57:04 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		sum = 10 * sum + (*(str) - '0');
		str++;
	}
	return (sum * sign);
}


int main()
{
	printf("My atoi %d\n", ft_atoi("214748364783213"));
	printf("atoi %d\n", atoi("214748364783213"));

	printf("My atoi %d\n", ft_atoi("-21474836487"));
	printf("atoi %d\n", atoi("-21474836487"));

	printf("My atoi %d\n", ft_atoi("2147483648"));
	printf("atoi %d\n", atoi("2147483648"));

	printf("My atoi %d\n", ft_atoi("-2147483649"));
	printf("atoi %d\n", atoi("-2147483649"));
	// printf("My atoi %d\n", ft_atoi());
	// printf("atoi %d\n", ft_atoi());
	// printf("My atoi %d\n", ft_atoi());
	// printf("atoi %d\n", ft_atoi());
	// printf("My atoi %d\n", ft_atoi());
	// printf("atoi %d\n", ft_atoi());
	return 0;
}
