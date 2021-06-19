void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	if (*b == 0)
	{
		*a = 0;
		*b = 0;
	}
	else
	{
		*a = *a / *b;
		*b = c % *b;
	}
}
