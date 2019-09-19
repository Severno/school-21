/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:56:05 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:09:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ts1;
	char	*ts2;
	size_t	i;
	size_t	pos;

	ts1 = (char *)haystack;
	ts2 = (char *)needle;
	i = 0;
	if (!*ts2)
		return (ts1);
	while (ts1[i])
	{
		if (ts1[i] == ts2[0])
		{
			pos = 1;
			while (ts1[pos + i] == ts2[pos] && ts2[pos])
				pos++;
			if (!ts2[pos])
				return (&ts1[i]);
		}
		i++;
	}
	return (NULL);
}
