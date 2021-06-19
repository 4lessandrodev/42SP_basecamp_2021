#include	<unistd.h>

void	ft_putnbr (int nb)
{
	int		value;
	int		positive;
	int		divider;
	int		module;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		positive = nb * -1;
		ft_putnbr(positive);
	}
	else if (nb > 9)
	{
		divider = nb / 10;
		module = nb % 10;
		ft_putnbr(divider);
		ft_putnbr(module);
	}
	else
	{
		value = nb + 48;
		write(1, &value, 1);
	}
}
