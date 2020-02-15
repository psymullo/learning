int ft_sqrt(int nb)
{
  int half;
  int i;
  
  if(nb == 0 || nb == 1)
    return (nb);
    
  i = 1;
  half = nb / 2;
  while (i <= half)
  {
      if(i*i == nb)
        return (i);
      i++;
  }
  return (0);
}