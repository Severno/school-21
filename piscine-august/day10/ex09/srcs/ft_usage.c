/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:58:46 by sapril            #+#    #+#             */
/*   Updated: 2019/08/13 13:58:56 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_usage(int a, int b)
{
	int sum;

	sum = a + b;
	write(1, "error : only [ + - * / % ] are accepted.", 41);
}
