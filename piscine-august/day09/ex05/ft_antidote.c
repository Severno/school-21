/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:19:16 by sapril            #+#    #+#             */
/*   Updated: 2019/08/08 22:19:17 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_antidote(int i, int j, int k)
{
	int mid;

	mid = (i + j + k) / 3;
	return (mid);
}

int main()
{
	printf("%d", ft_antidote(1,2,3));
	printf("------------");
	printf("%d", ft_antidote(6,6,5));
	printf("------------");
	printf("%d", ft_antidote(4,6,8));
	printf("------------");
	printf("%d", ft_antidote(2,8,2));
	printf("------------");
	printf("%d", ft_antidote(3,3,3));
	printf("------------");
	printf("%d", ft_antidote(1,2,3));
	printf("------------");
	printf("%d", ft_antidote(1,2,3));
	printf("------------");
	printf("%d", ft_antidote(10,10,1));
	return 0;
}
