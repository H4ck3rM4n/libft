#include "libft.h"

char            *ft_strstr(const char *src, const char *str)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(str);
    
    if (str == NULL)
        return ((char*)src);
    while (i < ft_strlen(src) - len)
    {
        if (src[i] == str[0])
            if (ft_strncmp(src + i, str, len) == 0)
                return ((char*)(src + i));
        i++;
    }
    return (NULL);
}
