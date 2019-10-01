/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 15:37:23 by sapril            #+#    #+#             */
/*   Updated: 2019/10/01 20:23:24 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Valid or not
// read_coordinates
#include "read.h"


void				read_input(int fd, char *buf, t_tetra_el *begin_tetra) // 1
{
	int		ret;
	int		y_buff[4];
	int		x_buff[4];
	char	sign;

	sign = 'A';
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (begin_tetra == NULL)
			begin_tetra = create_tetra_el(read_one_block(buf, y_buff, x_buff, sign++));
		else
			add_back_tetra_el(begin_tetra, read_one_block(buf, y_buff, x_buff, sign++));
	}
}

t_tetra_info		*read_one_block(char *buf, int y_buff[], int x_buff[], char sign) // 2
{
	int				i;
	int				y;
	int				x;
	int				counter;
	t_tetra_info	*new_tetra_info;

	i = 0;
	y = 0;
	x = 0;
	counter = 0;
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			x_buff[x] = i % 5;
			y_buff[x++] = y;
			counter++;
		}
		else if(buf[i] == '\n' && (buf[i+1] == '.' || buf[i+1] == '#') && counter > 0)
			y++;
		i++;
	}
	new_tetra_info = create_tetra_info(x_buff, y_buff, sign);
	return (new_tetra_info);
}



//int check_connections(char *buf, int ret)
//{
//	int i;
//
//	i = 0;
//	while(buf[i])
//	{
//		if (buf[i] == '#')
//		{
//			if (buf[i + 5] == '#'
//			&& buf[i + 10] == '#'
//			&& buf[i + 15] == '#')
//				return (1);
//			else if (buf[i + 1] == '#'
//			&& buf[i + 2] == '#'
//			&& buf[i + 3] == '#')
//				return (1);
//			else if ()
//		}
//
//		i++;
//	}
//}

int		check_input(char *buf)
{
	int i;

	i = 0;
	return (1);
}