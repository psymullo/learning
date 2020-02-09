void    ft_swap(int *a, int *b)
{
    *a += *b;
    *b = *a -*b;
    *a -= *b;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    
    i = 0;
    while (i != size)
          ft_swap(&tab[i++], &tab[--size]);
}