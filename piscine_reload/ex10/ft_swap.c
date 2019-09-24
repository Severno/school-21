/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:49:08 by sapril            #+#    #+#             */
/*   Updated: 2019/09/02 21:49:10 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	if (a && b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

int c;
int main()
{
//	int a = 100, b = 200;
//	unsigned int i;
//
//	i = 0;
//	while (i++ < 4294967295)
//		ft_swap(&a, &b);
	 int *restrict a[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("%d\n", *a);
	return (0);
}
