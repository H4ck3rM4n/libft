#include "libft.h"

char    *ft_strrev(const char *s)
{
    char    *fresh;
    int     i;

    i = 0;
    fresh = ft_strnew(ft_strlen(s));
    while (s[i] != '\0')
    {
        fresh[ft_strlen(s) - i - 1] = s[i];
        i++;
    }
    return (fresh);
}
