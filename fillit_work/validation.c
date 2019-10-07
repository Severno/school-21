/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:46:21 by sapril            #+#    #+#             */
/*   Updated: 2019/10/07 08:29:01 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_map(char *buf)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < 19)
	{
		if (buf[i] && buf[i] != '\n' && buf[i] != '#' && buf[i] != '.')
			return (0);
		if (buf[i] == '\n' && (((i + 1) % 5) != 0))
			return (0);
		if (buf[i] == '#')
			count++;
		i++;
	}
	if (!buf[i] || buf[i] != '\n')
		return (0);
	return (count);
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

int	valid(char *buf)
{
	if (check_figure(buf) && check_map(buf))
		return (1);
	return (0);
}
