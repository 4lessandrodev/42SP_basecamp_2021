#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;
	int	x;
	int	y;

	printf("Informe o valor de x:\n");
	scanf("%d", &x);
	printf("Informe o valor de y:\n");
	scanf("%d", &y);
	ft_div_mod(x, y, &div, &mod);
	printf("resultado = a:%d / b:%d = %d, mod: %d\n", x, y, div, mod);
	return (0);
}
