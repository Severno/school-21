/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:56:43 by sapril            #+#    #+#             */
/*   Updated: 2019/10/18 18:04:23 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

#define SPECIFIERS "dDiuUxXoOcCsSp%fFeEgGaAn"

void parse_int(char *str, int iter, va_list args);
void flag_int_out(va_list args);
void parse_flag(char *str, int *iter, va_list args);

#endif
