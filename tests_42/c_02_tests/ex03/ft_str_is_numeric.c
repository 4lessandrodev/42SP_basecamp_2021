int	ft_str_is_numeric(char *str)
{
	int	i;
	int	dec;

	i = 0;
	while (str[i] != '\0')
	{
		dec = (int)str[i];
		if((dec < 48 || dec > 57))
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
