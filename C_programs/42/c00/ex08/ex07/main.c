#include <stdio.h>

void    ft_putnbr(int n);

int main()
{
    ft_putnbr(-2147483647);
    printf("\n");
    ft_putnbr(2147483646);
    printf("\n");
    ft_putnbr(2147483647);
    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");

    return 0;
}