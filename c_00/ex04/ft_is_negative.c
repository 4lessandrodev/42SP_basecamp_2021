#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signal;

	if (n < 0)
	{
		signal = 'N';
	}
	else
	{
		signal = 'P';
	}
	write(1, &signal, 1);
}
