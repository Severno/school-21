/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 15:37:23 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 17:04:53 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetra_el			*read_input(char *file_name,
								char *buf, t_tetra_el *begin_tetra)
{
	char	sign;
	int		ret;
	int		y_buff[CHARS_NUMBER];
	int		x_buff[CHARS_NUMBER];
	int		fd;

	sign = 'A';
	fd = open(file_name, O_RDONLY);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (valid(buf, ret))
		{
			if (begin_tetra == NULL)
				begin_tetra = create_tetra_el(
						read_one_block(buf, y_buff, x_buff, sign++));
			else
				add_back_tetra_el(begin_tetra,
						read_one_block(buf, y_buff, x_buff, sign++));
		}
		else
			return (NULL);
	}
	return (begin_tetra);
}

t_tetra_info		*read_one_block(char *buf,
									int y_buff[], int x_buff[], char sign)
{
	int				i;
	int				y;
	int				x;
	t_tetra_info	*new_tetra_info;

	i = 0;
	y = 0;
	x = 0;
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			x_buff[x] = i % 5;
			y_buff[x++] = y;
		}
		else if (buf[i] == '\n' && (buf[i + 1] == '.' || buf[i + 1] == '#'))
			y++;
		i++;
	}
	align_figure(y_buff, x_buff);
	new_tetra_info = create_tetra_info(x_buff, y_buff, sign);
	return (new_tetra_info);
}

int					count_figures(t_tetra_el *begin_tetra, t_max *max_h_w)
{
	int			counter;
	t_tetra_el	*tmp;

	counter = 0;
	tmp = begin_tetra;
	max_h_w->max_width = tmp->figure->x[3];
	max_h_w->max_height = tmp->figure->y[3];
	while (tmp)
	{
		if (tmp->next)
		{
			if (max_h_w->max_width + 1 < tmp->next->figure->x[3] + 1)
				max_h_w->max_width = tmp->next->figure->x[3] + 1;
			if (max_h_w->max_height + 1 < tmp->next->figure->y[3] + 1)
				max_h_w->max_height = tmp->next->figure->y[3] + 1;
		}
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}

void				align_figure(int *y_buff, int *x_buff)
{
	while (y_buff[0] != 0
	&& y_buff[1] != 0
	&& y_buff[2] != 0
	&& y_buff[3] != 0)
	{
		y_buff[0]--;
		y_buff[1]--;
		y_buff[2]--;
		y_buff[3]--;
	}
	while (x_buff[0] != 0
		&& x_buff[1] != 0
		&& x_buff[2] != 0
		&& x_buff[3] != 0)
	{
		x_buff[0]--;
		x_buff[1]--;
		x_buff[2]--;
		x_buff[3]--;
	}
}
