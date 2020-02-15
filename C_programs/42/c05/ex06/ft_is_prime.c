int ft_is_prime(int nb)
{
  int i;
  
  if(nb == 0 || nb == 1)
    return (0);
    if(nb > 0)
    {
      i = 2;
      /*a sêquncia de numeros até metade do valor a ser coferido apresenta 
      submultiplos dos numeros após a metade do valor*/
      while (i <= nb/2)
      {
        if(nb % i == 0)
          return (0);
         ++i;
      }
      return (1);
    }
    else
    {
      i = -2;
      while (i >= nb/2)
      {
        if(nb % i == 0)
          return (0);
        --i;
      }
      return (1);
    }
}