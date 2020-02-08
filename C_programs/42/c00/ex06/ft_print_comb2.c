#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
/*utilização da divisão e e operador modulo que devolve o resto da divisão entre dois numeros.
Exemplo:
- 10 / 2 = 5
- 10 % 2 = 0
Situação que que divendo e menor que o divisor:
- 2 / 10 = 0 (como no exemplo os numero interos são inteiros não é mostrado os numeros após a vírgula)
- 2 % 10 = 2 (nesse caso como será feito a subtração do de 2 com zero,pois o 2 é menor que 10 ,logo o menor número possível
              multiplo de 10 é zero).
*/
void    ft_print_comb2(void)
{
    int number_ne; //number 98
    int number_nn; //number 99

    number_ne = 0;
    while (number_ne <=98)
    {
        number_nn = number_ne + 1;
        while (number_nn < 100)
        {
            ft_putchar(number_ne/10 + '0');
            ft_putchar(number_ne%10 + '0');
            ft_putchar(' ');
            ft_putchar(number_nn/10 + '0');
            ft_putchar(number_nn%10 + '0');
            number_nn++;
            if(number_ne == 98)
                ft_putchar('\n');
            else
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
        number_ne++;
    }
}