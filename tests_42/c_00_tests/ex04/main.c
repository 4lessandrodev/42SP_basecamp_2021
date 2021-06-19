#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{

	printf("10: \n");
	ft_is_negative(10);
	printf("\n");
	printf("-10: \n");
	ft_is_negative(-10);
	printf("\n");
	printf("0: \n");
	ft_is_negative(0);
	printf("\n");
	return (0);
}
