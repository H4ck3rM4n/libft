#include "libft.h"

t_list      *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    if(!lst)
        return (NULL);

    t_list  *fresh;
    t_list  *temp;
    t_list  *new;

    fresh = ft_lstnew(lst->content, lst->content_size);
    fresh = (*f)(fresh);
    temp = fresh;
    lst = lst->next;

    if(!fresh)
        return (NULL);

    while (lst != NULL)
    {
        new = ft_lstnew(lst->content, lst->content_size);
        new = (*f)(new);
        temp->next = new;
        temp = temp->next;
        lst = lst->next;
    }
    return (fresh);
}
