/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:25:29 by sapril            #+#    #+#             */
/*   Updated: 2019/10/18 18:33:06 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void parse_flag(char *str, int *iter, va_list args)
{
	str[*iter + 1] == 'd' ? flag_int_out(args) : 0;
	str[*iter + 1] == 'c' ? flag_char_out(args) : 0;
	str[*iter + 1] == 's' ? flag_str_out(args) : 0;

	*iter += 1;
}

void parse_int(char *str, int iter, va_list args)
{
	str[iter] == 'd' ? flag_int_out(args) : 0;
}