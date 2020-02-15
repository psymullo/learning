int ft_iterative_factorial(int nb)
{
  int i;
  int fat;
  if (nb > 12 || nb < 0)
    return (0);
  i = 1;
  fat = 1;
  while (i <= nb)
  {
    fat *= i;
    i++;
  }
  return (fat);
}