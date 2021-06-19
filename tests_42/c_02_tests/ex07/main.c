#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str1[] = "ola bem vindo";
	printf("Original: %s\n", str1);
	ft_strupcase(str1);
	printf("Final: %s ", str1);

	return (0);
}
