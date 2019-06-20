void    ft_bzero(void *s, size_t n)
{
    while (s && n > 0)
    {
        *(char*)s = '\0';
        s++;
        n--;
    }
}
