/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:17:46 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:09:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	if (dst || src)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = src[i];
		return (dst);
	}
	return (NULL);
}
