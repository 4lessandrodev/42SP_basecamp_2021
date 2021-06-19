int	is_lower(char n)
{
	int	result;

	result = 0;
	if (n >= 'a' && n <= 'z')
		result = 1;
	return (result);
}

int	is_upper(char n)
{
	int	result;

	result = 0;
	if (n >= 'A' && n <= 'Z')
		result = 1;
	return (result);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_low;
	int	is_up;

	i = 0;
	while (str[i] != '\0')
	{
		is_low = is_lower(str[i]);
		is_up = is_upper(str[i]);
		if ((is_low != 1) && (is_up != 1))
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
