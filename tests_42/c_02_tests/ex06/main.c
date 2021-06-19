#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "abcABCdefgtc";
	result = ft_str_is_printable(str);
	printf("result: %d\n", result);
	str = "\a";
	result = ft_str_is_printable(str);
	printf("result: %d\n", result);
	str = "";
	result = ft_str_is_printable(str);
	printf("result: %d\n", result);
	return (0);
}
