/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:03:39 by sapril            #+#    #+#             */
/*   Updated: 2019/08/15 20:03:41 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_o.h"

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2 || argc > 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 20);
		else
			write(1, "Too many arguments.\n", 21);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
		ft_putstr(buf);
	close(fd);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
