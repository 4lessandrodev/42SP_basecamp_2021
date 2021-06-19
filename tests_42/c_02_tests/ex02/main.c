#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "abcdefghijklmnopQRStuVxyZ";
	result = ft_str_is_alpha(str);
	printf("result: %d\n", result);
	str = "abcdefghijklmnopQR7StuVxyZ";
	result = ft_str_is_alpha(str);
	printf("result: %d\n", result);
	str = "";
	result = ft_str_is_alpha(str);
	printf("result: %d\n", result);
	return (0);
}
