#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	int	i;

	if (s && (int)len) > -1)
	{
		i = 0;
		str = (char *)malloc(sizeof(s));
		while (len > 0)
		{
			str[i] = s[start];
			i++;
			start++;
			len--;
		}
		return (str);
	}
	return (0);
}

