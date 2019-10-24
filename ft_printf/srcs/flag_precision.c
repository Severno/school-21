/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:05:32 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 19:55:03 by sapril           ###   ########.fr       */
/*                                                                            */
#include "../includes/ft_printf.h"

/* ************************************************************************** */

static void calc_padding(t_param *param)
{
	while ((param->str[(param->iter)] >= '0' && param->str[(param->iter)] <= '9'))
		param->padding = param->padding * 10 + (param->str[param->iter++] - '0');
}

static void calc_precision(t_param *param)
{
	while ((param->str[(param->iter)] >= '0' && param->str[(param->iter)] <= '9'))
		param->precision = param->precision * 10 + (param->str[param->iter++] - '0');


		
}

void flag_width(t_param *param)
{
	if ((param->str[(param->iter)] >= '0' && param->str[(param->iter)] <= '9'))
		calc_padding(param);
	if (param->str[(param->iter)] == '.')
		param->iter++;
	if ((param->str[(param->iter)] >= '0' && param->str[(param->iter)] <= '9'))
		calc_precision(param);
	parse_flag(param);
}