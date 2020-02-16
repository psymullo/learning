unsigned int    ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned    int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int len_dest;
    unsigned int len_src;
    unsigned int i;

    len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    if (size > (len_dest + len_src + 1))
    {
        i = 0;
        while (src[i] != '\0')
            dest[len_dest + i] = src[i++];
        dest[len_dest + i] = '\0';
        return (len_dest + len_src);
    }
    return (len_dest + len_src);
}
