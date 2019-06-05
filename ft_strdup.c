#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int	i;
	int	len;
	char	*str;

	len = 0;
	while (s[len])
		len++;
	s = (char *)malloc(sizeof(*s) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
