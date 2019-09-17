/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:38:07 by sapril            #+#    #+#             */
/*   Updated: 2019/09/14 20:09:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	new_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	j = 0;
	while (s2[j])
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
