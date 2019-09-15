/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 19:32:49 by sapril            #+#    #+#             */
/*   Updated: 2019/08/05 22:05:55 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					break ;
				i++;
			}
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return ((void *)0);
}
