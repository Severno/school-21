
#include "get_next_line.h"

int main()
{
//
//	char str[100] = "Hello\nWorld";
//	printf("%s\n", str);
//	ft_memmove(str, str + 5, 5);
//	printf("%s\n", str);
	int i;

	i = 0;
	char *str = "Hel";
	while (i < 10)
	{
		printf("%c\n", *str);
		printf("%p\n", str++);
		i++;
	}
	char *str1 = NULL;
	printf("%s\n", str);
//	int fd;
//	int fd1;
//	int result;
//	char **line;
//
//	result = 0;
//	fd = open("../text.txt", O_RDONLY);
//	fd1 = open("../gnl3_2.txt", O_RDONLY);
//	line = (char **)malloc(sizeof(char *) * 100);
//	*line = (char *)malloc(sizeof(char) * 100);
//	result = get_next_line(fd, line);
//	result = get_next_line(fd1, line);
//	printf("%s\n", *line);
//	printf("%d\n", result);
//	result = get_next_line(fd, line);
//	printf("%s\n", *line);
//	printf("%d\n", result);
//	result = get_next_line(fd, line);
//	printf("%s\n", *line);
//	printf("%d\n", result);
//	result = get_next_line(fd, line);
//	printf("%s\n", *line);
//	printf("%d\n", result);
//	result = get_next_line(fd, line);
//	printf("%s\n", *line);
//	printf("%d\n", result);
////	ft_strdel(line);
////	free(line);
//	line = NULL;
//	close(fd);

	return 0;
}