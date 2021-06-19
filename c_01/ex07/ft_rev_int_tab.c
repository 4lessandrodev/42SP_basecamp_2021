void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	index;

	index = 0;
	while (size > index)
	{
		size--;
		swap = tab[size];
		tab[size] = tab[index];
		tab[index] = swap;
		index++;
	}
}
