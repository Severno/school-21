/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:54:38 by sapril            #+#    #+#             */
/*   Updated: 2019/09/17 12:35:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_s;
	size_t	i;
	size_t	j;
	size_t	end;

	if (!s)
		return (NULL);
	i = ft_check_start_spaces(s, ft_strlen(s));
	end = ft_check_end_spaces(s, ft_strlen(s));
	j = 0;
	if (i > 0 || end + 1 == ft_strlen(s))
	{
		new_s = (char *)malloc(sizeof(char) * ((end - i) + 2));
		if (!new_s)
			return (NULL);
		while (i <= end && s[i])
			new_s[j++] = s[i++];
		new_s[j] = '\0';
	}
	else
	{
		new_s = (char *)malloc(sizeof(char));
		new_s[0] = '\0';
	}
	return (new_s);
}
