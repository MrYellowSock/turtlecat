#include <unistd.h>

void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
