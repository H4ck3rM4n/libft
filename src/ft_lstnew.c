#include "libft.h"

t_list      *ft_lstnew(const void *content, size_t content_size)
{
    t_list  *fresh;

    fresh = (t_list*)malloc(sizeof(t_list));
    if(fresh == NULL)
        return (NULL);
    if(content == NULL)
    {
        fresh->content = NULL;
        fresh->content_size = 0;
    }
    else
    {
        fresh->content = malloc(content_size);
        if(content == NULL)
        {
            free(fresh);
            return (NULL);
        }
        ft_memcpy(fresh->content, content, content_size);
        fresh->content_size = content_size;
    }
    fresh->next = NULL;
    return (fresh);
}
