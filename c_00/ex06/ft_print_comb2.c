#include <unistd.h>
#include <stdio.h>

void	print_separator (int first, int second)
{
	int	can_print;

	can_print = first + second;
	if (can_print != 197)
		write (1, ", ", 2);
}

void	print_value (int first, int second)
{
	int	unit_first;
	int	unit_second;
	int	dec_first;
	int	dec_second;

	dec_first = ((int)((first % 100) / 10)) + 48;
	dec_second = ((int)((second % 100) / 10)) + 48;
	unit_first = ((int)((first % 100) % 10)) + 48;
	unit_second = ((int)((second % 100) % 10)) + 48;
	write (1, &dec_first, 1);
	write (1, &unit_first, 1);
	write(1, " ", 1);
	write (1, &dec_second, 1);
	write (1, &unit_second, 1);
	print_separator (first, second);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;
	int	restarts;

	first = 0;
	restarts = 1;
	second = 1;
	while (first <= 99)
	{
		while (second <= 99 && first <= 98)
		{
			if (second != first)
				print_value (first, second);
			second++;
		}
		restarts++;
		second = restarts;
		first++;
	}
}
