unsigned int    ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    /*retorna o tamanho da string até elemento nulo*/
    while (str[i] != '\0')
        i++;
    
    return i;
}
/*Verificar algum tratamento de error para função*/
char    *ft_strcat(char *dest, char *src)
{
    unsigned int i;
    unsigned int len_dest;

    len_dest = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[len_dest + i] = src[i];
        ++i;
    }
    dest[len_dest + i] = '\0';
    return (dest);
}