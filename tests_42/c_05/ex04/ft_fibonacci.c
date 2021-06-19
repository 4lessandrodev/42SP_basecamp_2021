int	is_valid(int index, int *res)
{
	if (index < 0)
	{
		*res = (-1);
		return (0);
	}
	if (index == 0)
	{
		*res = 0;
		return (0);
	}
	if (index == 1)
	{
		*res = 1;
		return (0);
	}
	return (1);
}

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (!is_valid(index, &res))
	{
		return (res);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
