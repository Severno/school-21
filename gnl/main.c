
#include "get_next_line.h"

int main()
{
//
//	char str[100] = "Hello\nWorld";
//	printf("%s\n", str);
//	ft_memmove(str, str + 5, 5);
//	printf("%s\n", str);

	int fd;
	int result;
	char **line;

	result = 0;
	fd = open("../gnl3_2.txt", O_RDONLY);
	line = (char **)malloc(sizeof(char *) * 100);
	*line = (char *)malloc(sizeof(char) * 100);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	ft_strdel(line);
	free(line);
	line = NULL;
	close(fd);

	return 0;
}