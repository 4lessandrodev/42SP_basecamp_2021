#include <unistd.h>

void	print_value (char c, char d, char u)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
}

void	print_result (char c, char d, char u)
{
	print_value (c, d, u);
	if (c != '7')
		write (1, ", ", 2);
}

void	ft_print_comb (void)
{
	int	c_cent;
	int	c_dec;
	int	c_unit;

	c_cent = '0';
	while (c_cent <= '9')
	{
		c_dec = '1';
		while (c_dec <= '9')
		{
			c_unit = '2';
			while (c_unit <= '9')
			{
				if (c_cent < c_dec && c_dec < c_unit)
				{
					print_result (c_cent, c_dec, c_unit);
				}
				c_unit++;
			}
			c_dec++;
		}
		c_cent++;
	}
}
