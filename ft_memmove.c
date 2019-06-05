#include <headers.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*sr;
	char 	*des;
	size_t	i;

	i = -1;
	sr = (char *)src;
	des = (char *) dest;
	if (sr < des)
		while ((int)(--n) >= 0)
			*(des + n) = *(sr + n);
	else 
		while (++i < n)
			*(des + i) = *(sr + i);
	return (dest);
}
