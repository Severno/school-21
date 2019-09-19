/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:28:25 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:09:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	if (!s)
		return (NULL);
	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (NULL);
	i = -1;
	while (++i < len)
		new_s[i] = s[start + i];
	new_s[i] = '\0';
	return (new_s);
}
