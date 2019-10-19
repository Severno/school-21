/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:56:43 by sapril            #+#    #+#             */
/*   Updated: 2019/10/19 15:59:40 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

// INT
void parse_int(char *str, int iter, va_list args);
void flag_int(va_list args);
void parse_flag(char *str, int *iter, va_list args);

// ALIGNMENT
void parse_alignment(char *str, int *iter, va_list args);
void flag_minus(va_list args, char *str, int *iter);
void flag_plus(va_list args, char *str, int *iter);
void flag_zero(va_list args, char *str, int *iter);
void flag_grid(va_list args, char *str, int *iter);

// CHAR FLAGS
void flag_str(va_list args);
void flag_char(va_list args);

// UTILS
int ft_iter_padding(unsigned long long num);
void ft_do_padding(int padding_left);


#endif
