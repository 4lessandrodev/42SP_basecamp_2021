int	is_valid(int *res, int nb, int power)
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
	if (power == 1)
	{
		*res = nb;
		return (0);
	}
	return (1);
}

void	calculate(int *res, int nb, int power)
{
	while (power > 1)
	{
		if (*res != 0)
		{
			*res = *res * nb;
		}
		else
		{
			*res = nb * nb;
		}
		power--;
	}
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (!is_valid(&result, nb, power))
	{
		return (result);
	}
	else
	{
		calculate(&result, nb, power);
	}
	return (result);
}
