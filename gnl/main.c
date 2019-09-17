
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
//	int fd;
//	char c[BUFF_SIZE + 1];
//	int ret;
//	int i;
//
//	ret = 0;
//	i = 0;
//	fd = open("../test.txt", O_RDWR);
//	printf("%d\n", fd);
//	ret = read(fd, c, 1000);
//	printf("%d\n", ret);
//	printf("%s\n", c);
	int a;

	a = 2304;
	char str[100] = "Hello!";
	printf("%s\n", str);
	ft_bzero(str, 3);
	printf("%s\n", str);
	ft_bzero(&a, 2);
	printf("%d\n", a);


//	while ((ret = read(fd, c, 1000)) > 0 && c[i] != '\n')
//	{
//		printf("%c", c[i]);
//		i++;
//		ft_strchr()
//	}
	return 0;
}