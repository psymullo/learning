#include <stdio.h>

int ft_isspace(char c)
{
  if (c == '\f'||c == '\n'||c == '\t'||c == '\r' ||c == '\v')
    return 1;
  return 0;
}
int ft_under_or_over(){}
int ft_atoi(char *str)
{
  int i;
  int cont_mn;
  int nbr;
  
  nbr = 0;
  cont_mn = 0;
  i = 0;
  while(ft_isspace(str[i]))
    i++;
  while(str[i] == '-' || str[i] == '+')
  {
      if (str[i++] == '-')
        ++cont_mn;
  }
  while(str[i] >= '0' && str[i] <= '9')
  {
      nbr = nbr*10 + (str[i] - '0');
      i++;
  }
  if(cont_mn%2 != 0)
    nbr *= -1;
  if ((-2147483648  + nbr) > 0 ||(2147483646 + nbr) )
    return (0);
  return (nbr);
}
//incomleta.
int main() {
  char test[] = "-+-+-2147483647"; 
  int v;
  
  v = ft_atoi(test);
  if(v)
    printf("numero inteiro :%d\n",v);
  else
  {
    printf("Valor inválido\n");
  }
  return 0;
}