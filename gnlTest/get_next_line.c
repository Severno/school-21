/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:40:17 by sapril            #+#    #+#             */
/*   Updated: 2019/09/17 22:42:46 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	change_buf(char **line_buff, char *temp, const int fd)
{
	ft_strdel((&line_buff[fd]));
	line_buff[fd] = ft_strdup(temp);
	ft_strdel(&temp);
}

int		read_file(char **line_buff, const int fd, char *temp)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;

	if ((ret = read(fd, buf, BUFF_SIZE)) == 0)
		return (0);
	buf[ret] = '\0';
	temp = ft_strjoin(line_buff[fd], buf);
	change_buf(line_buff, temp, fd);
	return (1);
}

int		get_line(char **line_buff, char **line, const int fd)
{
	*line = ft_strdup(line_buff[fd]);
	ft_strclr(line_buff[fd]);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*line_buff[255];
	char			buf[BUFF_SIZE + 1];
	char			*temp;
	char			*nl_ptr;

	temp = NULL;
	if (read(fd, buf, 0) < 0 || line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (!line_buff[fd])
		line_buff[fd] = ft_strnew(0);
	while ((nl_ptr = ft_strchr(line_buff[fd], '\n')) == NULL)
		if ((read_file(line_buff, fd, temp)) == 0)
			break ;
	if (ft_strlen(line_buff[fd]) != 0)
	{
		if (!(ft_strchr(line_buff[fd], '\n')))
			return (get_line(line_buff, &*line, fd));
		*nl_ptr = '\0';
		temp = ft_strdup(nl_ptr + 1);
		*line = ft_strdup(line_buff[fd]);
		change_buf(line_buff, temp, fd);
	}
	else
		return (0);
	return (1);
}
