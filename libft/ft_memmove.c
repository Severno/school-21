/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:35:19 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:09:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_tmp;
	char	*src_tmp;
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	dst_tmp = (char *)dst;
	src_tmp = (char *)src;
	if (src < dst)
		while ((int)(--len) >= 0)
			*(dst_tmp + len) = *(src_tmp + len);
	else
		while (++i < len)
			*(dst_tmp + i) = *(src_tmp + i);
	return (dst);
}
