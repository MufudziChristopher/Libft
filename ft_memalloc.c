void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t 	i;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (size-- > 0)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

