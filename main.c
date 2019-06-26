#include "libft.h"
#include <stdio.h>

int main () {
   char src[40];
   char dest[12];

   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);

   return(0);
}
