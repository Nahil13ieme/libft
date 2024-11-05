#include "libft.h"

void	ft_putendl_dl(char *s, int fd)
{
	while (*s)
		write(fd, *s++, 1);
	write(fd, '\n', 1);
}