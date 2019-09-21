/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:57:01 by sapril            #+#    #+#             */
/*   Updated: 2019/09/17 12:35:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	size_t	sum;

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
		if (sum <= MAX_LONG)
			sum = 10 * sum + (*(str) - '0');
		else if (sum > MAX_LONG && sign == -1)
			return (0);
		else
			return (-1);
		str++;
	}
	return ((int)(sum * sign));
}
