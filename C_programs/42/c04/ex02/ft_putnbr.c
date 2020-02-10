#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putnbr(int nbr)
{
  unsigned int i;
  unsigned int j;
  unsigned int z;
  
  if(nbr < 0)
  { 
    ft_putchar('-');
    nbr *= -1;
  }
  i = nbr;
  while (i > 0)
  {
    z = 0;
    j = i;
    while (j>= 9)
    {
      j /= 10;
      z++;
    }
    ft_putchar(j + '0');
    while (z-- != 0)
      j *= 10;
    i = i - j;    
  }
}