/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:33:38 by sapril            #+#    #+#             */
/*   Updated: 2019/10/07 09:49:21 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int argc, char *argv[])
{
	char		buf[BUFF_SIZE + 1];
	t_tetra_el	*begin_tetra;
	t_tetra_el	*result;
	int			fd;

	begin_tetra = NULL;
	if (argc != 2)
	{
		ft_putstr("error");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	result = read_input(fd, buf, begin_tetra);
	if (result == NULL)
	{
		ft_putstr("error");
		return (1);
	}
	solve(result);
	free_tetras(begin_tetra);
	return (0);
}
