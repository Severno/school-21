/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:30:39 by sapril            #+#    #+#             */
/*   Updated: 2019/09/17 12:35:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new_str;

	if (!s || !f)
		return (NULL);
	new_str = ft_strnew(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	while (s[++i] && f)
		new_str[i] = f(s[i]);
	new_str[i] = '\0';
	return (new_str);
}
