#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "alessandro";
	result = ft_str_is_lowercase(str);
	printf("result: %d\n", result);
	str = "Alessandro";
	result = ft_str_is_lowercase(str);
	printf("result: %d\n", result);
	str = "";
	result = ft_str_is_lowercase(str);
	printf("result: %d\n", result);
	return (0);
}
