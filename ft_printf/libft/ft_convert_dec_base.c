/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_dec_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:00:45 by sapril            #+#    #+#             */
/*   Updated: 2019/10/23 20:42:07 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		get_value(int num, char sign)
{
	char letter;
	if (sign == 'X')
		letter = 'A';
	else
		letter = 'a';
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + letter);
}

static void		rev_result(char *str)
{
	int len;
	int i;

	len = ft_strlen(str);
	i = 0;
	while ( i < len / 2)
	{
		char temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
		i++;
	}
}

char			*ft_convert_dec_base(int base, int input_num, char sign)
{
	int index;
	char *res;

	res = ft_strnew(100);
	index = 0;
	while (input_num > 0)
	{
		res[index++] = get_value(input_num % base, sign);
		input_num /= base;
	}
	res[index] = '\0';
	rev_result(res);
	return (res);
}
