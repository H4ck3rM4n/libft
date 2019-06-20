void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    while(src && n > 0)
    {
        *(char*)dest = *(char*)src;
        dest++;
        src++;
        n--;
    }
    return (dest);
}
