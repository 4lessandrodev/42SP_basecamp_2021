#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write (1, &str[count], 1);
		count++;
	}
}
