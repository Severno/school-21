
#include "get_next_line.h"

int main()
{
	int fd;
	int result;
	char **line;

	result = 0;
	fd = open("../gnl_to_free_or_not_to_free.txt", O_RDONLY);
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
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	result = get_next_line(fd, line);
	printf("%s\n", *line);
	printf("%d\n", result);
	close(fd);

	return 0;
}