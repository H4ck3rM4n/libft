#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    if(start > len)
        return (NULL);
    if(start >= ft_strlen(s))
        return (NULL);
    if (s == NULL)
        return (NULL);

    char    *dup;

    if(start + len >= ft_strlen(s))
        len = ft_strlen(s) - start + 1;

    dup = ft_strnew(len);
    ft_strncpy(dup, (char*)(s + start), len);
    return (dup);
}
