int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return 1;
    while (str[i] != '\0')
    {
        /*esse intervalo de 32 a 126 se refere aos caracter printaveis da tabela ascii*/
        if (str[i] >= 32  && str[i] <= 126)
            return 1;
        i++;
    }
    return 0;
}