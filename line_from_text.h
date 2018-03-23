#ifndef LINE_FROM_TEXT_H
# define LINE_FROM_TEXT_H
# include "libc/libc.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 3

int     line_from_text(const int fd, char **line);

#endif
