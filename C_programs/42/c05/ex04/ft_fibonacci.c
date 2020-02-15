int ft_fibonacci(int index)
{
  int a;
  int b;
  if (index < 0)
    return (-1);
  if(index  < 2)
    return( index);
    
  a = ft_fibonacci(index - 1);
  b = ft_fibonacci(index - 2);
  if (a - b < 0)
    return (0);
  return (a +b);
}