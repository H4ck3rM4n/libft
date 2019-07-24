#include "libft.h"

void    ft_putendl_fd(const char *s, int fd)
{
    ft_putstr_fd(ft_strjoin(s, "\n"), fd);
}
