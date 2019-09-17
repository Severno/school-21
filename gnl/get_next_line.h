#ifndef GNL_GET_NEXT_LINE_H
# define GNL_GET_NEXT_LINE_H

# include "../libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 8
# define MAX_FD 255
# define STR_LEN lineBuff->strSize

typedef struct		s_lines
{
	char			*str;
	int				fd;
	int 			strSize;
}					t_lines;

int					get_next_line(const int fd, char **line);


#endif
