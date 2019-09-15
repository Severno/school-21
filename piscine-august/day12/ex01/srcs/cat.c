/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:04:40 by sapril            #+#    #+#             */
/*   Updated: 2019/08/15 20:04:41 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_o.h"

int		main(int argc, char **argv)
{
	char c;
	char *first;

	if (argc < 2)
		ft_getchar();
	if (argc > 1)
	{
		display_file(argc, argv);
	}
	return (0);
}

void	display_file(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;
	int		counter;

	counter = 0;
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd < 0)
		{
			ft_strerror(errno, argv[0], argv[i]);
			return ;
		}
		while ((ret = read(fd, buf, BUF_SIZE)) && (counter < MAX_BUF))
		{
			ft_putstr(buf);
			counter++;
		}
		i++;
	}
	close(fd);
}

void	ft_strerror(int errn, char *prog_name, char *file_name)
{
	if (errn == 2)
	{
		write(1, prog_name, ft_strlen(prog_name));
		write(1, ": ", 2);
		write(1, file_name, ft_strlen(file_name));
		write(1, ": No such file or directory\n", 28);
	}
	else if (errn == 13)
	{
		write(1, prog_name, ft_strlen(prog_name));
		write(1, ": ", 2);
		write(1, file_name, ft_strlen(file_name));
		write(1, ": Permission denied\n", 28);
	}
	else if (errn == 21)
	{
		write(1, prog_name, ft_strlen(prog_name));
		write(1, ": ", 2);
		write(1, file_name, ft_strlen(file_name));
		write(1, ": Is a directory\n", 18);
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
