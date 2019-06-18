char	*ft_strtrim(char const *s)
{
	int	i;
	int	len;
	char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len -1] == ' ' || s[len - 1] == '\t' || s[len -1] == '\n')
		len--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	s += 1;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
	
