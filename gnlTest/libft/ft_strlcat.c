/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:05:57 by sapril            #+#    #+#             */
/*   Updated: 2019/09/17 12:35:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len_dst;
	size_t	len_src;
	size_t	res;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst + 1 > size)
		res = len_src + size;
	else
		res = len_dst + len_src;
	j = 0;
	if (size > len_dst + 1)
	{
		while (len_dst < size - 1)
			*(dst + len_dst++) = *(src + j++);
		*(dst + len_dst) = '\0';
	}
	return (res);
}
