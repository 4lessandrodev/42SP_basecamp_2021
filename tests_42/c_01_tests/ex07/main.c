#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	count;
	int	arr[10];

	count = 0;
	while (count <= 9)
	{
		arr[count] = count + 1;
		printf ("arr[%d]=%d\n", count, count + 1);
		count++;
	}
	ft_rev_int_tab(arr, 10);
	count = 0;
	printf ("\n");
	while (count <= 9)
	{
		printf ("arr[%d]=%d\n", count, arr[count]);
		count++;
	}
	return (0);
}
