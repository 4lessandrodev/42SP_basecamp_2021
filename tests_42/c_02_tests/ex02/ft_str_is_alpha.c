int	ft_str_is_alpha(char *str)
{
	int	i;
	int	dec;

	i = 0;
	while (str[i] != '\0')
	{
		dec = (int)str[i];
		if(((dec < 97 || dec > 122) && (dec < 65 || dec > 90)))
		{
			return (1);
			break;
		}
		i++;
	}
	if (i == 0)
	{
		return (1);
	}
	return (0);
}
