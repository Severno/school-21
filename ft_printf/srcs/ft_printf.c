/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:26:42 by sapril            #+#    #+#             */
/*   Updated: 2019/10/24 16:54:46 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
//



void ft_printf(char *input, ...)
{
	t_param *param;
	va_list args;

	param = (t_param*)ft_memalloc(sizeof(t_param));
	param->str = input;
	param->iter = 0;
	va_start(param->args, input);
	while (param->str[param->iter])
	{
		if (param->str[param->iter] == '%')
		{
			param->iter++;
			parse_flag(param);
		}
		else
			write(1, &param->str[param->iter], 1);
		param->iter++;
	}

}

int main()
{

	ft_printf("Hello %d %d\n", 100, 200);
	printf("Hello %d\n", 100);
//	printf("%-100d", 10);
	return 0;
}
