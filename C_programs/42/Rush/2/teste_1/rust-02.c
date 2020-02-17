#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>/*não usar essa biblioteca, somente para relizar teste*/

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_line(int fd)
{
    char nbr;

    while (nbr != '\n')
    {
        read(fd,&nbr,1);
        if(nbr >= 'a' && nbr <= 'z')
            ft_putchar(nbr);
    }
}
void    ft_test(int tam, char l,int fd)
{   
    char c;
    char bln;
    int cont;

    cont  = 0;
    bln = '0';
    while(read(fd,&c,1) != 0)
    {
        if (c == l)
        { 
            bln = '1';
            ft_line(fd);
        }
        else if(tam > 1 && bln == '1')
        {
            if (c >= '0' && c <= '9')
                ++cont;
            else
            {
                cont = 0;
            }
            if(cont == tam)
            {
                ft_putchar(' ');
                ft_line(fd);
            }
        }
    }
    close(fd);
}
void    ft_hundred(char *str)
{
    int len;
    int i;
    int fd;

    i = 0;
    len = ft_strlen(str);
    while(i < len)
    {
        fd = open("../numbers.dict", O_RDONLY);
        ft_test(len - i, str[i],fd);
        i++;
    }
}

int main(int argc, char **argv)
{
    //int fd;

    if(argc > 1)
    {
        //fd = open("../numbers.dict", O_RDONLY);
        ft_hundred(argv[1]);
    }
    return (0);
}