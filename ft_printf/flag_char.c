/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:37:26 by sapril            #+#    #+#             */
/*   Updated: 2019/10/18 17:37:26 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void flag_char(va_list args)
{
	char out;

	out = va_arg(args, int);
	ft_putchar(out);
}

void flag_str(va_list args)
{
	char *out;

	out = va_arg(args, char *);
	ft_putstr(out);
}