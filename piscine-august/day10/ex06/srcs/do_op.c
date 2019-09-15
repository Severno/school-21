/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:58:21 by sapril            #+#    #+#             */
/*   Updated: 2019/08/13 13:58:23 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
			nb *= -1;
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		operation(int first_arg, char *s, int second_arg)
{
	int i;

	i = 0;
	while (g_opptab[i].s)
	{
		if (!ft_strcmp(g_opptab[i].s, s))
			return (g_opptab[i].f(first_arg, second_arg));
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		first_arg;
	int		second_arg;
	char	*sign;

	if (argc != 4)
		return (0);
	first_arg = ft_atoi(argv[1]);
	sign = argv[2];
	second_arg = ft_atoi(argv[3]);
	if (second_arg == 0 && (!ft_strcmp(sign, "%") || !ft_strcmp(sign, "/")))
	{
		if (*sign == '%')
			write(1, "Stop : modulo by zero\n", 23);
		else if (*sign == '/')
			write(1, "Stop : division by zero\n", 25);
		return (0);
	}
	if (!ft_strcmp(sign, "+")
	|| !ft_strcmp(sign, "-")
	|| !ft_strcmp(sign, "/") || !ft_strcmp(sign, "*") || !ft_strcmp(sign, "%"))
		ft_putnbr(operation(first_arg, sign, second_arg));
	else
		ft_putnbr(ft_usage(first_arg, second_arg));
	write(1, "\n", 1);
	return (0);
}
