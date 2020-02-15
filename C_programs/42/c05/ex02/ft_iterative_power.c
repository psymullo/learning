int ft_overflow(int power)
{
  int test;
  
  test = power*power;
  if((test/power) != power)
    return (-1);
  return(1);
}
int ft_iterative_power(int nb, int power)
{
  int i;
  int test;
  /*fzer um tratamento pa nb <0 ou nâo ?*/  
  test = 1;
  if (nb == 0)
    return (1);
  else if(power < 0)
    return (0);
  i = 1;
  while (i <= nb)
  {
    test *= power;
    if(ft_overflow(test) == -1)
      return (-1);
    i++;
  }
  return (test);
}