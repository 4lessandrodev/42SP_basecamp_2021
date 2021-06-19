int	is_alphabet (char n)
{
	if(((n < 'A' || n > 'Z') && (n < 'a' || n > 'z')))
		return (0);
	else
		return (1);
}

void	captalize_next(char *str, int index)
{
	int	is_letter;
	
	is_letter = is_alphabet(str[index + 1]);
		if (is_letter)
			str[index + 1] -= 32;
}

void	captalize_current(char *str, int index)
{
	str[index] -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	is_letter;

	index = 0;
	is_letter = 0;
	while (str[index] != '\0')
	{
		is_letter = is_alphabet(str[index]);
		if (is_letter && index > 0)
			str[index] = str[index];
		else
		{
			if (index == 0)
				captalize_current(str, index);
			else
				captalize_next(str, index);
		}
		index++;
	}
	return (str);
}
