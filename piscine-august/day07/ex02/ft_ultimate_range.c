/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:14:09 by sapril            #+#    #+#             */
/*   Updated: 2019/08/08 23:14:10 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ints;
	int	len;
	int i;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ints = (int*)malloc(sizeof(*ints) * len);
	if (ints == NULL)
	{
		*range = NULL;
		return (0);
	}
	while ((i < len))
	{
		ints[i] = min++;
		i++;
	}
	*range = ints;
	return (len);
}
