int	is_valid(int nb, int *res)
{
	if (nb <= 0)
	{
		*res = 0;
		return (0);
	}
	else if (nb == 1)
	{
		*res = 1;
		return (0);
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int	index;
	int	res;
	int	max_possible;

	index = 0;
	res = 0;
	max_possible = 46341;
	if (!is_valid(nb, &res))
	{
		return (res);
	}
	res = index;
	while (index < max_possible)
	{
		index++;
		if (index * index == nb)
		{
			res = index;
			break ;
		}
	}
	return (res);
}
