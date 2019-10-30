/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:56:43 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 18:39:28 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_param
{
	void		*arg_value;
	char		*str;
	char		sign;
	va_list		args;
	int			val_length;
	int			max_offset;
	int			precision;
	int			padding;
	int			iter;
	int			p;
}				t_param;

// UTILS
void ft_do_padding(int value, t_param *param, char sign);

void ft_printf(char *input, ...);

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
void flag_width(t_param *param);


// CHAR FLAGS
void flag_str(t_param *param);
void flag_char(t_param *param);




#endif
