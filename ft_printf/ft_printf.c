/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:26:42 by sapril            #+#    #+#             */
/*   Updated: 2019/10/18 18:41:03 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* TODO
 1. PADDING
	char *ptr = "Hello";
	printf("%40s\n", ptr); That will give you 35 spaces, then the word "Hello". This is how you format stuff when you know how wide you want the column, but the data changes (well, it's one way you can do it).
 	printf(" %10d \n", number); aligned right edge 10 chars
 	printf(" %+10d \n", number); aligned right edge 10 chars
	printf(" %-10d \n", number); aligned left edge 10 chars
 2


 */

#include "ft_printf.h"
#include <stdio.h>


void ft_printf(char *input, ...)
{
	va_list	args;
	char flag[1];
	int		i;

	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
			parse_flag(input, &i, args);
		else
			write(1, &input[i], 1);
		i++;
	}
	va_end(args);
}


int main()
{
	ft_printf("Hello %d, %d %s %c fdsf sdfds fs\n", 100, 200, "Hello", '#');
	return 0;
}
//
