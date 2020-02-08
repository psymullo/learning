#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
/*Condição para verificar as vírgulas e espaços da sequência.*/
void    ft_space(char first)
{
    if (first != '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    else
    {
        ft_putchar('\n');
    }
}

void    ft_print_comb(void)
{
    char first;
    char second;
    char third;

    first = '0';
    while (first <= '9')
    {
        second = first + 1;
        while (second <= '8')
        {   
            third = second + 1;
            while (third <= '9')
            {
                ft_putchar(first);
                ft_putchar(second);
                ft_putchar(third);
                ft_space(first);
                third++;
            }
            second++;
        }
        first++;
    }   
}