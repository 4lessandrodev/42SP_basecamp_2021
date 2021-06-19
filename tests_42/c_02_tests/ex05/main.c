#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "ALESSANDRO";
	result = ft_str_is_uppercase(str);
	printf("result: %d\n", result);
	str = "Alessandro";
	result = ft_str_is_uppercase(str);
	printf("result: %d\n", result);
	str = "";
	result = ft_str_is_uppercase(str);
	printf("result: %d\n", result);
	return (0);
}
