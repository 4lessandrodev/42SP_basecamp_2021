int	ft_atoi(char *str)
{
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			signal = signal * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = (*str - 48) + (result * 10);
		str++;
	}
	return (result * signal);
}
