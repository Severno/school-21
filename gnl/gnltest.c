
#include "get_next_line.h"

t_lines *ft_create_el(int fd)
{
	t_lines *new_line;
	new_line = (t_lines*)malloc(sizeof(t_lines));
	if (!new_line)
		return (NULL);
	new_line->str = NULL;
	new_line->strSize = 0;
	new_line->fd = fd;
	return (new_line);
}

static int check_line(char *buf, t_lines *lineBuff, char **line,int fd)
{
	int i;
	char *bufTemp;

	i = 0;
	bufTemp = (char *)malloc(BUFF_SIZE + 1);
	while (buf[i] != '\n' && buf[i])
	{
		bufTemp[i] = buf[i];
		i++;
		lineBuff[fd].strSize++;
	}
	bufTemp[i] = '\0';
	if (buf[i] == '\n')
	{
		lineBuff[fd].str = ft_strjoin(lineBuff[fd].str, bufTemp);
		line[fd] = lineBuff[fd].str;
		free(bufTemp);
		free(lineBuff);
		return (1);
	}
	lineBuff[fd].str = ft_strjoin(lineBuff[fd].str, bufTemp);
	free(bufTemp);
	return (0);
}

int get_next_line(const int fd, char **line)
{
	static t_lines	*lineBuff[255];
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0 || fd >= MAX_FD)
		return (-1);
	if (!lineBuff[fd])
		lineBuff[fd] = ft_create_el(fd);
	if (lineBuff[fd] == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (check_line(buf, lineBuff[fd], line, fd))
		{
			ft_bzero(buf, BUFF_SIZE + 1);
			return (1);
		}
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	return (0);
}
//
// Created by Sophia April on 17/09/2019.
//

