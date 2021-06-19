int	is_valid(int *res, int power)
{
	if (power < 0)
	{
		*res = 0;
		return (0);
	}
	if (power == 0)
	{
		*res = 1;
		return (0);
	}
	return (1);
}

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (!is_valid(&result, power))
	{
		return (result);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
