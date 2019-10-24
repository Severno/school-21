/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:56:43 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 16:40:13 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_param
{
	char		*str;
	char		sign;
	va_list		args;
	int			min_length;
	int			precision;
	int			padding;
	int			iter;
	int			p;
}				t_param;

// INT
void parse_flag(t_param *param);
void parse_int(t_param *param);
void flag_int(t_param *param);
void flag_hex(t_param *param);

// ALIGNMENT
void parse_alignment(t_param *param);
void flag_minus(t_param *param);
void flag_plus(t_param *param);
void flag_zero(t_param *param);
void flag_grid(t_param *param);
void do_alignment(t_param *param);

// CHAR FLAGS
void flag_str(t_param *param);
void flag_char(t_param *param);

// UTILS
void ft_do_padding(t_param *param);


#endif
