
#include "get_next_line.h"

int main()
{
	int fd;
	int result;
	char **line;

	result = 0;
	fd = open("../gnl5_2.txt", O_RDONLY);
	line = (char **)malloc(sizeof(char *) * 100);
	*line = (char *)malloc(sizeof(char) * 100);
	result = get_next_line(fd, line);
	result = get_next_line(fd, line);
	printf("%d\n", result);
	printf("%s\n", *line);
	close(fd);

	return 0;
}