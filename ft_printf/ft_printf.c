/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:26:42 by sapril            #+#    #+#             */
/*   Updated: 2019/10/17 15:53:56 by sapril           ###   ########.fr       */
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

//void test_va(char *format, ...)
//{
//	va_list arg;
//
//	va_start(arg, format);
//
//	int num = va_arg(arg, int);
//	int i = 0;
//	int arguments = 0;
//	while (format[i])
//	{
//		if (format[i] == '%')
//			arguments++;
//		i++;
//	}
//	i  = 0;
//	while (i < arguments) {
//		printf("%d\n", num);
//		num = va_arg(arg, int);
//		i++;
//	}
//	va_end(arg);
//}

int main()
{
//	test_va("%d, %d, %d, %d", 1,2,3,4);
	printf("%-10d \n", 100);
	printf("%10s", "Hello");
	return 0;
}
//
//int count_specifiers(char *str)
//{
//	int count;
//	char specifiers[] = ;
//	int i;
//
//	count = 0;
//	i = 0;
//	while (str[i])
//	{
//		if (str[i] == '%')
//		i++;
//	}
//}

