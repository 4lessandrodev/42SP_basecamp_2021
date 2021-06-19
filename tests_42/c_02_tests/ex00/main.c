#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[7];
	char	src[] = {"Hello World"};
	int		size;

	ft_strcpy(dest, src);
	size = 0;
	while(dest[size] != '\0')
	{
		printf("%c\n", dest[size]);
		size++;
	}
	return (0);
}
