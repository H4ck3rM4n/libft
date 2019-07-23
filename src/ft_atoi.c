#include "libft.h"

int         ft_atoi(const char *nptr)
{
    size_t  i;
    int     n;
    int     sign;

    i = 0;
    sign = 1;
    n = 0;
    while (nptr[i] == ' ')
        i++;
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (nptr[i] == '+')
        i++;

    while ((nptr[i] < '0' || nptr[i] > '9') && nptr[i] != '\0')
        i++;

    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        n = n * 10 + (nptr[i] - 48);
        i++;
    }
    return (sign * n);
}
