#include "libft.h"
#include "stdio.h"

static  int ft_nsize(int n)
{
    int i;

    i = 0;
    while(n != 0)
    {
        i++;
        n /= 10;
    }
    return (i);
}

char        *ft_itoa(int n)
{
    int     sign;
    int     nsize;
    int     i;
    char    *number;

    sign = 1;
    if(n < 0)
    {
        n *= -1;
        sign = -1;
    }
    i = 0;
    nsize = ft_nsize(n);
    number = ft_strnew(nsize + 1);
    
    while(i < nsize)
    {
        number[i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    if(sign == -1)
        number[i] = '-';
    return (ft_strrev(number));
}
