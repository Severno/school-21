/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:25:29 by sapril            #+#    #+#             */
/*   Updated: 2019/10/23 20:47:46 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


void parse_flag(char *str, int *iter, va_list args)
{
	if (str[*iter] == '-' || str[*iter] == '+' || str[*iter] == '0' || str[*iter] == '#')
		parse_alignment(str, iter, args);
	str[*iter] == 'd' ? flag_int(args) : 0;
	str[*iter] == 'c' ? flag_char(args) : 0;
	str[*iter] == 's' ? flag_str(args) : 0;
}

void parse_alignment(char *str, int *iter, va_list args)
{
	str[*iter] == '-' ? flag_minus(args, str, iter) : 0;
	str[*iter] == '+' ? flag_plus(args, str, iter) : 0;
	str[*iter] == '0' ? flag_zero(args, str, iter) : 0;
	str[*iter] == '#' ? flag_grid(args, str, iter) : 0;
}

void parse_int(char *str, int iter, va_list args)
{
	str[iter] == 'd' ? flag_int(args) : 0;
}