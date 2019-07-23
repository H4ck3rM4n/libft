#include "libft.h"

void    ft_striter(char *s, void (*f)(char *))
{
    size_t len;
    size_t i;

    len = ft_strlen(s);
    i = 0;
    while (i < len)
    {
        (*f)(s[i]);
        i++;
    }
}
