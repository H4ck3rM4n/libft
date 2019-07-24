#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    if(!lst)
        return;

    t_list  *temp;

    temp = lst;
    while(temp != NULL)
    {
        (*f)(temp);
        temp = temp->next;
    }
}
