void	calculate(int *res, int nb)
{
	while (nb > 1)
	{
		if (*res != 0)
		{
			*res = *res * (nb - 1);
		}
		else
		{
			*res = nb * (nb - 1);
		}
		nb--;
	}
}

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

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 0;
	if (!is_valid(nb, &result))
	{
		return (result);
	}
	else
	{
		calculate(&result, nb);
	}
	return (result);
}
