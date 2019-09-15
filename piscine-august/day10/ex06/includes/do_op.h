/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:45:05 by sapril            #+#    #+#             */
/*   Updated: 2019/08/13 20:00:01 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void					ft_putchar(char c);
void					ft_putnbr(int nb);
int						ft_add(int a, int b);
int						ft_div(int a, int b);
int						ft_mod(int a, int b);
int						ft_mul(int a, int b);
int						ft_sub(int a, int b);
int						ft_usage(int a, int b);
int						ft_atoi(char *str);
int						operation(int first_arg, char *s, int second_arg);
int						ft_strcmp(char *s1, char *s2);

typedef	struct			s_opp
{
	char				*s;
	int					(*f)(int, int);
}						t_opp;

t_opp g_opptab[] =
{
	{"-", &ft_sub},
	{"+", &ft_add},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"", &ft_usage}
};

#endif
