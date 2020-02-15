int ft_overflow(int power)
{
  int test;
  
  test = power*power;
  if((test/power) != power)
    return (-1);
  return(1);
}

int ft_recursive_power(int nb, int power)
{
  int test;
  if(nb == 1)
  {
    return (power);
  }
  else if(nb == 0)
    return (1);
  else
  /* verificar over flow na recurão*/
  {
    test = power*ft_recursive_power(nb - 1,power);
    if (ft_overflow(test) == -1)
      return(-1);
    return(test);
  }
}