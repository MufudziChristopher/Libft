char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && n)
	{
		if (*haystack == needle[i])
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char *)(haystack - i + 1));
		haystack++;
		n--;
	}
	return (NULL);
}
