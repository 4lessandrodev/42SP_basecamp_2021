#include <unistd.h>

int	is_valid(int size)
{
	if (size > 1)
		return (1);
	else
		return (0);
}

int	size_of(char *args)
{
	int	size;

	size = 0;
	while (args[size])
		size++;
	return (size);
}

void	print_f(char *str[], int n)
{
	int	i;
	int	size;

	i = 0;
	while (i < n)
	{
		size = size_of(str[n]);
		write (1, str[n], size);
		write (1, "\n", 1);
		n--;
	}
}

int	main(int argc, char *argv[])
{
	if (!is_valid(argc))
	{
		return (0);
	}
	print_f(argv, (argc - 1));
	return (0);
}
