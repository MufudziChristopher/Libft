int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	negative;

	nbr = 0;
	negative = 0;
	i =0;
	while ((nptr[i] == '\n') || (nptr[i] == '\t') || (nptr[i] == '\v') || (nptr[i] == ' ') || (nptr[i] == '\f') || (nptr[i] == '\r'))
		i++;
	if (nptr[i] == '-')
		negative = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] && (nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)nptr[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}
