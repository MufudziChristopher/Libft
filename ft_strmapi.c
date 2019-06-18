char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*fstr;
	unsigned int 	i;
	int		j;

	if (s && f)
	{
		i = -1;
		j = ft_strlen((char *)s);
		fstr = (char *)malloc(j * sizeof(fstr));
		while (s[i++])
		{
			fstr[i] = f(i, s[i]);
		}
		return (fstr);
	}
	return (NULL);
}
