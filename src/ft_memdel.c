#include "libft.h"

void    ft_memdel(void **app)
{
    free(*app);
    *app = NULL;
}
