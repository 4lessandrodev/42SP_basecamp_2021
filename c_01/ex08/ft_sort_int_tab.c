void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	size = size - 1;
	while (index < size)
	{
		if (tab[index] > tab[index + 1])
		{
			swap = tab[index + 1];
			tab[index + 1] = tab[index];
			tab[index] = swap;
			index = 0;
		}
		else
		{
			index++;
		}
	}
}
