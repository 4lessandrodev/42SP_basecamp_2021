char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

int	ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isnt_alpha_num(char c)
{
	if (!(c >= '0' && c <= '9') \
		&& !(c >= 'A' && c <= 'Z') \
		&& !(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_is_lower(str[i]))
			str[0] -= 32;
		else if (ft_isnt_alpha_num(str[i]) && ft_is_lower(str[i + 1]))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
