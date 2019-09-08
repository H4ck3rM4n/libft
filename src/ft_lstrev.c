#include "libft.h"

t_list      *ft_lstrev(t_list *lst)
{
    t_list *prev = NULL;
    t_list *current = lst;
    t_list *next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return (prev);
}
