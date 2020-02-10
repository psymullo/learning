unsigned int ft_strlen(char *str)
{
    unsigned int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i - 1);
}

int ft_chck(char *str, char *to_find, int cont)
{
  unsigned int j;
  unsigned int len_to_find;
  
  j = 0;
  len_to_find = ft_strlen(to_find);
 while (to_find[j] == str[cont])
  {
    j++;
    cont++;
    if (j == len_to_find)
        return 1;
  }
  return 0;
}
/*implementar uma nova solução para função de busar uma substring
 criar uma string que não modifica a string original*/
char  *ft_strstr(char *str, char *to_find)
{
  unsigned int i;
  unsigned int j;
  char *nw_str;
  
  nw_str = str;
  j = 0;
  i = 0;
  while (str[i] != '\0')
  {
    if (ft_chck(nw_str, to_find, i))
    {
        while (str[i] != '\0')
        {
            nw_str[j++] = str[i++];
        }
        nw_str[j] = '\0';
        return (nw_str);
    }
    i++;
  }
  return (0);
}