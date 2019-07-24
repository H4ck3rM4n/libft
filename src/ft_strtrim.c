#include "libft.h"

char    *ft_strtrim(const char *s)
{
    char *fresh;
    size_t size;
    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(s) - 1;
    
    size = 0;
    while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    while(s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
        j--;

    size = ft_strlen(s) - (i + (ft_strlen(s) - j) - 1);
    fresh = ft_strnew(size);
    if(fresh == NULL)
        return (NULL);
    fresh = ft_strsub(s, i, size);
    return (fresh);
}
