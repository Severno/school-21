/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:59:16 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 18:17:16 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
//ld
//lld
//d
//hd
//hhd
//3.3d
//%0+-3.3d
//+d
//-d
void flag_int(t_param *param)
{
	param->val_length = ft_num_of_digits((int)param->arg_value);
	param->max_offset = (param->padding >= param->precision) ? param->padding : param->precision;
//	param->max_offset -= param->val_length;
	if (param->padding > 0)
	{
		ft_do_padding(param->padding, param, ' ');
		if (param->precision > 0)
		{
			ft_do_padding(param->precision, param, '0');
		}
	}
	ft_putnbr((int)param->arg_value);
}

void ft_do_padding(int value, t_param *param, char sign)
{
	int i;

	i = -1;
	if (param->padding > param->precision)
		value = param->padding - param->precision;
	while (++i < value - param->val_length)
	{
		write(1,&sign, 1);
	}
}