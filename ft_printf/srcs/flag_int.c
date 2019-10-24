/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:59:16 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 16:12:40 by sapril           ###   ########.fr       */
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
	int out;

	out = va_arg(param->args, int);
	ft_putnbr(out);
}