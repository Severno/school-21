/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:26:42 by sapril            #+#    #+#             */
/*   Updated: 2019/10/23 20:44:39 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
//Test
void ft_printf(char *input, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			parse_flag(input, &i, args);
		}
		else
			write(1, &input[i++], 1);
	}
	va_end(args);
}


int main()
{
	ft_printf("Hello %-100s\n", "100");
	printf("Hello %-100s\n", "100");
//	printf("%-100d", 10);
	return 0;
}
