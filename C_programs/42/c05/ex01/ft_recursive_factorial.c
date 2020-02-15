int ft_recursive_factorial(int nb)
{
 /*para int no sistema 32 bits*/
  if (nb < 0 || nb > 12)
    return (0);
  else if(nb == 0 || nb == 1)
    return (1);
  else
  {
    return (nb * ft_recursive_factorial(nb - 1));
  }
}