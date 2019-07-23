#include "libft.h"

void    *ft_memalloc(size_t size)
{
    char *str;

    str = (char*)malloc(sizeof(char) * size);
    if(str == NULL)
        return (NULL);
    else
    {
        ft_memset(str, 0, size);
        return (str);
    }
}
