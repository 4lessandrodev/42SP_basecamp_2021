int	ft_str_is_printable(char *str)
{
	int	i;
	int	dec;

	i = 0;
	while (str[i] != '\0')
	{
		dec = (int)str[i];
		if((dec < 32 || dec > 127))
		{
			return (0);
			break;
		}
		i++;
	}
	if (i == 0)
	{
		return (1);
	}
	return (1);
}
