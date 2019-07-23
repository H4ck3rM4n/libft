#include "libft.h"

char    *ft_strnstr(const char *src, const char *str, size_t n)
{
    if (str == NULL || src == NULL)
        return ((char*)src);

    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(str);
    while(i < ft_strlen(src) - len && i < n - len)
    {
        if (src[i] == str[0])
            if (ft_strncmp((char*)(src + i), str, len) == 0)
                return ((char*)(src + i));
        i++;
    }
    return (NULL);
}
