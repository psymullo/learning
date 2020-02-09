int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return 1;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            return 1;
        i++;
    }

    return 0;
}