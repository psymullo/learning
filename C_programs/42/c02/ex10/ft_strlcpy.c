unsigned int    ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int aux;
    aux = size;
    if (size > 0)
    {
        while ((aux -1) <= (size -1))//condição ?
        {
            dest[size - aux] = src[size - aux];
            --aux;
        }
    }
    if (aux == 0)
    {
        if (size != 0)
        {
          dest[size] = '\0';
        }
    }
    return ft_strlen(src);
}