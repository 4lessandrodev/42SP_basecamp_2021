#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "OLA BEM VINDO";
	printf("Original: %s\n", str1);
	ft_strlowcase(str1);
	printf("Final: %s ", str1);

	return (0);
}
