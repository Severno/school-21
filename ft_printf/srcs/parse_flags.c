/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:25:29 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 16:36:23 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


void parse_flag(t_param *param)
{
//	if (param->str[*(param->iter)] == '-' || param->str[*(param->iter)] == '+' || param->str[*(param->iter)] == '0' || param->str[*(param->iter)] == '#')
//		parse_alignment(param);
	param->str[(param->iter)] == 'd' ? flag_int(param) : 0;
//	param->str[*(param->iter)] == 'c' ? flag_char(param) : 0;
//	param->str[*(param->iter)] == 's' ? flag_str(param) : 0;
}

//void parse_alignment(t_param *param)
//{
//	param->str[*(param->iter)] == '-' ? flag_minus(args, str, iter) : 0;
//	param->str[*(param->iter)] == '+' ? flag_plus(args, str, iter) : 0;
//	param->str[*(param->iter)] == '0' ? flag_zero(args, str, iter) : 0;
//	param->str[*(param->iter)] == '#' ? flag_grid(args, str, iter) : 0;
//}
//
//void parse_int(char *str, int iter, va_list args)
//{
//	str[iter] == 'd' ? flag_int(args) : 0;
//}