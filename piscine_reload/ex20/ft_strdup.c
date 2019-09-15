/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:14:08 by sapril            #+#    #+#             */
/*   Updated: 2019/09/03 15:14:09 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*src2;

	src2 = NULL;
	i = 0;
	while (src[i])
		i++;
	src2 = (char *)malloc(i + 1);
	i = 0;
	if (!src2)
		return (NULL);
	while (src[i])
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = src[i];
	return (src2);
}
