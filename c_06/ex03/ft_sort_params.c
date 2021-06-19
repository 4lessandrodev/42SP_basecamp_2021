#include <unistd.h>

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

	i = 1;
	while (i <= n)
	{
		size = size_of(str[i]);
		write (1, str[i], size);
		write (1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

void	sort_args(char *argv[], int size)
{
	char	*swap;
	int		i;

	i = 1;
	while (i < size)
	{
		swap = argv[i];
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	size;

	size = argc - 1;
	sort_args(argv, size);
	print_f(argv, size);
	return (0);
}
