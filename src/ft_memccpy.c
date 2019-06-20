#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    while (n > 0)
    {
        *(unsigned char*)dest++ = *(unsigned char*)src++;
        if(*(unsigned char*)src == c)
            break;
    }
    return (dest);
}
