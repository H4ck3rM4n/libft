#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char *fresh;

    fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
    ft_strcat(fresh, s1);
    ft_strcat(fresh, s2);
    return (fresh);
}
