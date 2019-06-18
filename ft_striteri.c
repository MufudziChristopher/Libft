#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned in, char *))
{
	unsigned int 	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s + i);
	}
}

