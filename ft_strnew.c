char	*ft_strnew(size_t size)
{
	void	*f;
	int	i;

	i= 0;
	f = malloc(l);
	if (f != NULL)
	{
		while (size[i])
		{
			f[i] = '\0';
			i++;
		}
	}
	return (f);
}
