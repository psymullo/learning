int ft_test(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
      return 1;
  return 0;
}

char  *ft_strcapitalize(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -=32;
        i++;
    }
    while (ft_test(str[i]))
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
          str[i] += 32;
        i++;
    }
    i++;
  }
  return (str);
}