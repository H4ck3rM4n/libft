void    *ft_memset(void *s, int c, size_t n)
{
    while (s && n > 0)
    {
        *(int*)s = c;
        s++;
        n--;
    }
    return (s);
}
