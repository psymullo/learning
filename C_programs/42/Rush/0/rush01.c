void    ft_putchar(char c);
/*exer 1 ()*, fazer os outros exercio, depois fazer função passando argumento */
void    ft_prnt(int i_col, int j_row, int row, int col)
{
    if(j_row > 1 && j_row < row)
    {    
         if (i_col > 1 && i_col < col)
            ft_putchar(' ');
        else if(i_col == 1 || i_col == col)
            ft_putchar('*');
    }
    else
    {
        if (j_row == 1 && i_col == 1)
            ft_putchar('/');
        else if (j_row == row && i_col == 1)
            ft_putchar('\\');
        else if (j_row == 1 && i_col == col)
            ft_putchar('\\');
        else if (j_row == row && i_col == col)
            ft_putchar('/');
        else
        {
            ft_putchar('*');
        }
    }
}

void    rush_01(int row, int col)
{
    int i;
    int j;

    j = 1;
    i = 1;
    while (i <= col)
    {
        while (j <= row)
        {
           ft_prnt(i,j,row,col);
           j++;
        }
        j = 1;
        i++;
        ft_putchar('\n');
    }
}