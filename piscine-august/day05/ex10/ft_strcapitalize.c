/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:27:21 by sapril            #+#    #+#             */
/*   Updated: 2019/08/06 15:27:23 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_l_a(char c);
int		is_u_a(char c);
int		is_d(char c);

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (is_l_a(str[i]))
		{
			if (i == 0)
				str[i] = str[i] - 32;
		}
		if (i > 0 && is_u_a(str[i]))
			str[i] = str[i] + 32;
		if (
		i > 0
		&& !is_l_a(str[i - 1])
		&& !is_u_a(str[i - 1])
		&& !is_d(str[i - 1])
		&& is_l_a(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		is_l_a(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (0);
}

int		is_u_a(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	return (0);
}

int		is_d(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
	return (0);
}
