#include "libft.h"
#include "stdio.h"

int     main(void)
{
    char *str = "this is string   ";

    char **temp = ft_strsplit(str, ' ');
    
    int i = 0;
    while (temp[i] != NULL)
        printf("%s\n", temp[i++]);
    return (0);
}
