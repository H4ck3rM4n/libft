#include "libft.h"
#include <stdio.h>

int main () {
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   ft_strcat(dest, src);

   printf("Final destination string : |%s|", dest);

   return(0);
}
