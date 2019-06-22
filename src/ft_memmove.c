#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void *temp = src;

	while(src && n > 0)
	{
		*(unsigned char*)dest = *(unsigned char*)temp;
		temp++;
		dest++;
		n--;
	}
	return (dest);
}
