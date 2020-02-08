#include <unistd.h>

void	ft_putchar(int c);

int	main(void)
{
	int nbr;

    nbr = 5;
    ft_putchar((&nbr);
	return 0;
}

void	ft_putchar(int *c)
{
	write(1, c, 1);
}
