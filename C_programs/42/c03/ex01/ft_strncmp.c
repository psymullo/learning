int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while ((s1[i] != '\0') || (s2[i] != '\0'))
    {
        if ((s1[i] != s2[i])|| i == n)
            return (s1[i] - s2[i] + 0);
        i++;
    }
    return 0;
}
/*Realizar teste comparando com função da biblioteca string */