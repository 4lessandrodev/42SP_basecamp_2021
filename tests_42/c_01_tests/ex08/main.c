#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	count;
	int	arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	count = 0;
	printf ("\n");
	while (count <= 9)
	{
		printf ("arr[%d]=%d\n", count, arr[count]);
		count++;
	}
	ft_sort_int_tab(arr, 10);
	count = 0;
	printf ("\n");
	while (count <= 9)
	{
		printf ("arr[%d]=%d\n", count, arr[count]);
		count++;
	}
	return (0);
}
