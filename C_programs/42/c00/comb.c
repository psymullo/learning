#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	//char b;
	char c;
    //int nbr;

    //nbr = 42;
	a = '0';
	while (a <= '9')
	{
			
			c = a + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				//ft_putchar(b);
     			ft_putchar(c);
				//ft_putchar(&nbr);
				
				if (a != '8')
				{
					ft_putchar(' ');
					ft_putchar(',');
				}
				else
				{
					ft_putchar('\n');
				}
				++c;		
			}
			c = '0';
	
			++a;
	}
	
}
