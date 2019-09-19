/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:05:57 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:39:15 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strnlen(dst, size);
	if (len_dst == size)
		return (len_src + size);

	if (len_src < size - len_dst)
		ft_memcpy(dst+len_dst,src,len_src+1);
	else
	{
		ft_memcpy(dst+len_dst, src, size-1);
		dst[len_dst+size-1] = '\0';
	}
	return (len_dst + len_src);
}
