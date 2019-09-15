/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:51:14 by sapril            #+#    #+#             */
/*   Updated: 2019/08/12 20:51:15 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *temp;
	int i;

	i = 0;
	temp = (int*)malloc(sizeof(int) * length);
	if (NULL == temp)
		return (0);
	while (i < length)
	{
		temp[i] = (*f)(tab[i]);
		i++;
	}
	return (temp);
}
