#include "libft.h"

t_list      *ft_lstrev(t_list *lst)
{
    t_list *new = ft_lstnew(lst->content, lst->content_size);
    lst = lst->next;

    while(lst->content != NULL)
    {
        ft_lstadd(&new, lst);
        lst = lst->next;
    }
    return (new);
}
