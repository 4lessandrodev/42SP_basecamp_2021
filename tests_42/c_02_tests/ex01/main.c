#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

void	print_result(char *res, int n)
{
	int		size;
	size = 0;
	while(size < n)
	{
		printf("%c", res[size]);
		size++;
	};
	printf("\n");
}

int main(void)
{
	char 	a[5];
	char 	b[5];
	char 	c[7];

	a[0] = 't';
	a[1] = 'e';
	a[2] = 's';
	a[3] = 't';
	a[4] = 'e';
	
	ft_strncpy(b, a, 4);
	ft_strncpy(c, a, 7);
	print_result(b, 4);
	print_result(c, 7);
	return (0);
}
