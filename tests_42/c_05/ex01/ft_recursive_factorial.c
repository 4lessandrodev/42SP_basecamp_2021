int	is_valid(int nb, int *res)
{
	if (nb < 0)
	{
		*res = 0;
		return (0);
	}
	else if (nb == 1 || nb == 0)
	{
		*res = 1;
		return (0);
	}
	else
	{
		*res = 0;
		return (1);
	}
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (!is_valid(nb, &result))
	{
		return (result);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (result);
}
