#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 1;
	w = 1;
	while ((w <= x) && (h <= y))
	{
		if (w != 1 && w != x && h != 1 && h != y)
			ft_putchar(' ');
		else if ((w == 1 && h == 1) || (h == y && w == x && h > 1 && w > 1))
			ft_putchar('A');
		else if ((w == x && h == 1) || (w == 1 && h == y))
			ft_putchar('C');
		else
			ft_putchar('B');
		w++;
		if (w == x + 1)
		{
			w = 1;
			h++;
			ft_putchar(10);
		}
	}
}
