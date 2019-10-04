/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:46:21 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 17:39:10 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_map(char *buf, int ret)
{
	int i;

	i = 0;
	while (buf[i] == '\n' || buf[i] == '.' || buf[i] == '#' || buf[i] == '\0')
		i++;
	if (i < 20)
		return (0);
	if (ret > 20)
	{
		if (buf[19] == '\n' && (buf[19 + 1] == '\n' || buf[19 + 1] == '\0'))
			return (1);
	}
	else if ((buf[18] == '.' || buf[18] == '#') && buf[19] == '\0')
		return (1);
	return (0);
}

int	check_figure(char *buf)
{
	int i;
	int connections;

	i = 0;
	connections = 0;
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			if (buf[i + 1] == '#')
				connections++;
			if (buf[i - 1] == '#')
				connections++;
			if (buf[i + 5] == '#')
				connections++;
			if (buf[i - 5] == '#')
				connections++;
		}
		i++;
	}
	if (connections == 6 || connections == 8)
		return (1);
	else
		return (0);
}

int	valid(char *buf, int ret)
{
	if (check_figure(buf) && check_map(buf, ret))
		return (1);
	return (0);
}
