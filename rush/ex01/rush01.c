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
			ft_putchar(32);
		else if ((w == 1 && h == 1) || (h == y && w == x && h > 1 && w > 1))
			ft_putchar(47);
		else if ((w == x && h == 1) || (w == 1 && h == y))
			ft_putchar(92);
		else
			ft_putchar(42);
		w++;
		if (w == x + 1)
		{
			w = 1;
			h++;
			ft_putchar(10);
		}
	}
}
