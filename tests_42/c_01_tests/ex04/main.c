#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	
	printf ("Informe o valor de a:\n");
	scanf ("%d", &a);
	printf ("Informe o valor de b:\n");
	scanf ("%d", &b);
	printf ("divisao: %d/%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf ("resultado:%d, resto:%d\n", a, b);
	return (0);
}
