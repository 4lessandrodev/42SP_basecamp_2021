#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char	*str;
	int		length;

	str = "Alessandro";
	length = ft_strlen(str);
	printf ("O tamanho da string é: %d \n", length);
	return (0);
}
