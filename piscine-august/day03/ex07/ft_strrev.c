/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 22:21:15 by sapril            #+#    #+#             */
/*   Updated: 2019/08/02 22:24:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (*str)
	{
		str++;
		len++;
	}
	str -= len;
	while (i < len / 2)
	{
		temp = *(str + i);
		*(str + i) = *(str + len - 1 - i);
		*(str + len - 1 - i) = temp;
		i++;
	}
	return (str);
}
