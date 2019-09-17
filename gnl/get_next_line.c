
#include "get_next_line.h"

t_lines *ft_create_el(int fd)
{
	t_lines *new_line;
	if ((new_line = (t_lines*)malloc(sizeof(t_lines))))
		return (NULL);
	new_line->str = NULL;
	new_line->strSize = 0;
	new_line->fd = fd;
	return (new_line);
}

static int check_line(char *buf, t_lines *lineBuff, char **line)
{
	int i;
	char *bufTemp;

	i = 0;
	bufTemp = (char *)malloc(BUFF_SIZE + 1);
	while (buf[i] != '\n' && buf[i])
	{
		bufTemp[i] = buf[i];
		i++;
		STR_LEN++;
	}
	bufTemp[i] = '\0';
	if (buf[i] == '\n')
	{
		lineBuff->str = ft_strjoin(lineBuff->str, bufTemp);
		*line = lineBuff->str;
		free(bufTemp);
		free(lineBuff->str);
		return (1);
	}
	lineBuff->str = ft_strjoin(lineBuff->str, bufTemp);
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
//	if (!(lineBuff = (t_lines*)malloc(sizeof(t_lines))))
//		return (-1);

	if (!lineBuff[fd])
		lineBuff[fd] = ft_create_el(fd);
	if (lineBuff[fd] == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (check_line(buf, lineBuff, line))
		{
			ft_bzero(buf, BUFF_SIZE + 1);
			return (1);
		}
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	return (0);
}
