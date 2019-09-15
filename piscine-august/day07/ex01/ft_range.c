/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:05:59 by sapril            #+#    #+#             */
/*   Updated: 2019/08/08 17:06:01 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ints;
	int	len;
	int i;

	len = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	ints = (int*)malloc(sizeof(int) * len + 1);
	if (ints == NULL)
		return (NULL);
	while ((i < len))
		ints[i++] = min++;
	return (ints);
}
