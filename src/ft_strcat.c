#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t dlen;
	size_t i;
    
	dlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
