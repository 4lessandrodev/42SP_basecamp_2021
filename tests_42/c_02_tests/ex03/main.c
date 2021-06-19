#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "1234567890";
	result = ft_str_is_numeric(str);
	printf("result: %d\n", result);
	str = "123a45678";
	result = ft_str_is_numeric(str);
	printf("result: %d\n", result);
	str = "";
	result = ft_str_is_numeric(str);
	printf("result: %d\n", result);
	return (0);
}
