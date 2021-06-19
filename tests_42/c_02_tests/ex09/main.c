#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "ola seja bem vindo a-nossa-casa";
	char str2[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str3[] = "OLA MUNDO 4AS5 AS55ASDenta+e+um";
	printf("Original: %s\n", str1);
	ft_strcapitalize(str1);
	printf("Final: %s\n", str1);
	printf("\n");
	printf("Original: %s\n", str2);
	ft_strcapitalize(str2);
	printf("Final: %s\n", str2);
	printf("Original: %s\n", str3);
	ft_strcapitalize(str3);
	printf("Final: %s\n", str3);

	return (0);
}
