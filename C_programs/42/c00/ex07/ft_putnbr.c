cd#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    unsigned int aux; //usadas para conversão do inteiro num interiro sem sinais .
    unsigned int test;
    int cont;

    if (n < 0)
    {
      ft_putchar('-');
      n *= -1;
    }
    aux = n;
    test = aux;
    while (aux > 0)
    {
        cont = 0;
        while (aux > 9)
        {
            aux /= 10;
            cont++;
        }
        ft_putchar(aux + '0');
        while (cont-- != 0)
              aux *= 10; /*calcular um numero referente a dezena ,centena, milhares e etc do numero
                          Exemplo:
                          -no caso de 1523 é o aux = 1000*, depois aux = 500,depois aux = 20*/
        test = test - aux;
        aux = test;
    } 
}