#include "libft.h"

t_list      *ft_lstrev(t_list *lst)
{
    t_list *new = ft_lstnew(0, 0);

    while(lst != NULL)
    {
        ft_lstadd(&new, lst);
        lst = lst->next;
    }
    return (new);
}
