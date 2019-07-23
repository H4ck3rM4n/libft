#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char *temp;
    size_t i;

    temp = ft_strnew(ft_strlen(s));
    i = 0;
    while (i < ft_strlen(s))
    {
        temp[i] = (*f)(s[i]);
        i++;
    }
    return (temp);
}
