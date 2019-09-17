
#include "get_next_line.h"

int main()
{
	int fd;
	int result;
	char **line;

	result = 0;
	fd = open("../gnl3_2.txt", O_RDONLY);
	line = (char **)malloc(sizeof(char *) * 100);
	*line = (char *)malloc(sizeof(char) * 100);
	printf("%s\n", *line);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	close(fd);

	return 0;
}