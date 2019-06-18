char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len != 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
