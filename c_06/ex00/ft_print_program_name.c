#include <unistd.h>

void	print_f(char *name)
{
	int	index;

	index = 0;
	while (name[index] != '\0')
	{
		write (1, &name[index], 1);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	char	*name;

	name = argv[argc - 1];
	print_f(name);
	print_f("\n");
	return (0);
}
