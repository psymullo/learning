#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int fact(int t)
{
    int i;
    int cont;
    
    cont = 1;
    i = 1;
    while (i <= t)
    {
      cont *= i;
      i++;
    }
    return cont;
}
// inmcompleto
void ft_print_combn(int n)
{
  int v[n];
  int c;
  int d;
  int nbr_comb;
  
  nbr_comb = fact(10) / (fact(n)*fact(10 -n));
  c = 0;
    while (c < nbr_comb)
  {
        d = 0;
        while (d < n)
        {/*criar uma forma de armazenar os valores no vetor para forma os elementos da seq*/
              v[d] = 1;
              ft_putchar(v[d] + '0');
              d++;
        }
        ft_putchar(',');
        ft_putchar(' ');
        c++;
  }
} 