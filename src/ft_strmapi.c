#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *fresh;
    size_t i;

    i = 0;
    fresh = ft_strnew(ft_strlen(s));
    while(i < ft_strlen(s))
    {
        fresh[i] = (*f)(i, s[i]);
        i++;
    }
    return (fresh);
}
