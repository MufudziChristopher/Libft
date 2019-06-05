#include <headers.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*des;
	char	*sr;
	size_t 	cur;

	if (dest == src || n == 0)
		return (dest);
	cur = 0;
	des = (char *)dest;
	sr = (char *)src;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == c)
			return (c1 + cur + 1);
		cur++;
	}
	return (NULL)
}
