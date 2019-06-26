#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (s && n > 0)
	{
		
		if(*(unsigned char*)s == c)
			return ((unsigned char*)s + i);
		s++;
		n--;
		i++;
	}
	return (NULL);
}
