/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alignment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:37:45 by sapril            #+#    #+#             */
/*   Updated: 2019/10/19 20:13:40 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// Left alignmment
void flag_minus(va_list args, char *str, int *iter)
{
	int padding_left;
	void *arg;

	padding_left = 0;
	arg = va_arg(args, void*);
	*iter += 1;
	while (str[*iter] >= '0' && str[*iter] <= '9')
	{
		padding_left = padding_left * 10 + (str[*iter] - '0');
		*iter +=1;
	}
	if (str[*iter] == 'd')
		ft_putnbr((int)arg);
	else if (str[*iter] == 's')
	{
		ft_putstr((char *)arg);
	}
	ft_do_padding(padding_left-ft_num_of_digits(padding_left), ' ');
	*iter += 1;
}

//void flag_plus(va_list args, char *str, int *iter)
//{
//
//}
//
//void flag_zero(va_list args, char *str, int *iter)
//{
//
//}
//
//void flag_grid(va_list args, char *str, int *iter)
//{
//
//}

void ft_do_padding(int padding_left, char sign)
{
	int i;
	i = 0;
	while (i < padding_left)
	{
		ft_putchar(sign);
		i++;
	}
}

int ft_iter_padding(unsigned long long num)
{
	int count;

	count = 0;
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}