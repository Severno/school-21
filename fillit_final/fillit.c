/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:33:38 by sapril            #+#    #+#             */
/*   Updated: 2019/10/04 15:13:58 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int argc, char *argv[])
{
	char		buf[BUFF_SIZE + 1];
	t_tetra_el	*begin_tetra;
	t_tetra_el	*result;

	begin_tetra = NULL;
	if (argc != 2)
	{
		ft_putstr("error");
		return (1);
	}
	result = read_input(argv[1], buf, begin_tetra);
	if (result != NULL)
		if (solve(result))
			return (0);
		else
		{
			ft_putstr("error");
			return (1);
		}
	else
	{
		ft_putstr("error");
		return (1);
	}
}
